/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:23:50 by hakaraou          #+#    #+#             */
/*   Updated: 2025/02/11 10:32:33 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::Error::Error(const char *error) : _error(error) {
};

const char	*PmergeMe::Error::what() const throw() {
	return (_error);
}

PmergeMe::PmergeMe() {
}

PmergeMe::PmergeMe(const PmergeMe &pmergeme) {
	(void)pmergeme;
}

PmergeMe::~PmergeMe() {
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &pmergeme) {
	(void)pmergeme;
	return (*this);
}

void	PmergeMe::_printTime() const {
	std::cout	<< "Time to process a range of "
				<< WHITE << _size << " elements"
				<< RESET << " with "
				<< YELLOW << "std::vector"
				<< RESET << " : "
				<< WHITE << _vTime << " µs"
				<< RESET << std::endl;

	std::cout	<< "Time to process a range of "
				<< WHITE << _size << " elements"
				<< RESET << " with "
				<< YELLOW << "std::deque"
				<< RESET <<" : "
				<< WHITE << _dTime << " µs"
				<< RESET << std::endl;

	return ;
}

void	PmergeMe::_printAfter() const {
	std::cout	<< GREEN << "After:\t"
				<< RESET;
	for (size_t i = 0; i < _vector.size(); i++)
		std::cout << _vector.at(i) << " ";
	std::cout << std::endl;

	return ;
}

void	PmergeMe::_printBefore() const {
	int	number;
	std::cout	<< GREEN << "Before:\t"
				<< RESET;
	for (size_t i = 0; i < _size; i++) {
		std::stringstream n(_elements[i]);
		n >> number;
		std::cout << number << " ";
	}
	std::cout << std::endl;

	return ;
}

void	PmergeMe::_vPutElement() {
	int	number;

	for (size_t i = 0; i < _size; i++) {		
		std::stringstream n(_elements[i]);
		n >> number;
		_vector.push_back(number);
	}

	return ;
}

void	PmergeMe::_vMerge(std::vector<std::pair<int, int> > &tmp,
            std::vector<std::pair<int, int> > &left,
            std::vector<std::pair<int, int> > &right) {
    int i = 0, j = 0, k = 0;
    while (i < (int)left.size() && j < (int)right.size()) {
        if (left[i].first < right[j].first) {
            tmp[k++] = left[i++];
        } else {
            tmp[k++] = right[j++];
        }
    }

    while (i < (int)left.size())
        tmp[k++] = left[i++];

    while (j < (int)right.size())
        tmp[k++] = right[j++];

}

void	PmergeMe::_vMergeSort(std::vector<std::pair<int, int> > &tmp) {
    if (tmp.size() > 1) {
        int mid = tmp.size() / 2;

        std::vector<std::pair<int, int> > left(tmp.begin(), tmp.begin() + mid);
        std::vector<std::pair<int, int> > right(tmp.begin() + mid, tmp.end());

        _vMergeSort(left);
        _vMergeSort(right);
        _vMerge(tmp, left, right);
    }
}

void	PmergeMe::_vMakePairs(std::vector<std::pair<int, int> > &tmp) {
	(_vector.size() % 2)	? _impair = true
							: _impair = false;

	for (size_t i = 0; i < _vector.size() / 2; i++) {
		if (_vector.at(2 * i) > _vector.at(2 * i + 1))
			tmp.push_back(std::make_pair(_vector.at(2 * i), _vector.at(2 * i + 1)));
		else
			tmp.push_back(std::make_pair(_vector.at(2 * i + 1), _vector.at(2 * i)));
	}
	if (_impair)
		tmp.push_back(std::make_pair(INT_MAX, _vector.at(_vector.size() - 1)));

	_vMergeSort(tmp);

	return ;
}

void	PmergeMe::_vMakeMainChain(std::vector<std::pair<int, int> > &tmp) {
	_vector.clear();

	for (size_t i = 0; i < tmp.size(); i++)
		_vector.push_back(tmp.at(i).first);
	if (_impair)
		_vector.pop_back();

	return ;
}

size_t	PmergeMe::_getJacobsthalIndex(const size_t index) const {
	if (!index || index == 1)
		return (index);

	return (_getJacobsthalIndex(index - 1) + 2 * _getJacobsthalIndex(index - 2));
}

void	PmergeMe::_vMakeSeq(std::vector<int> &seq, const size_t size) const {
	size_t	is_size = 0;
	for (size_t i = 2; is_size != size; i++) {
		if (_getJacobsthalIndex(i) - 1 < size)
			is_size++;
		seq.push_back(_getJacobsthalIndex(i) - 1);
		if (_getJacobsthalIndex(i) - _getJacobsthalIndex(i - 1) > 1) {
			for (size_t j = _getJacobsthalIndex(i) - 1; j != _getJacobsthalIndex(i - 1); j--) {
				seq.push_back(j - 1);
			if (j - 1 < size)
				is_size++;
			}
		}
	}

	return;
}

void	PmergeMe::_vSortElements() {
    std::vector<std::pair<int, int> > tmp;
    _vMakePairs(tmp);
    _vMakeMainChain(tmp);

    size_t size = _size / 2;
    if (_impair)
        size = _size / 2 + 1;

    std::vector<int> seq;
    _vMakeSeq(seq, size);

    for (size_t index = 0; index < seq.size(); index++) {
        if (seq[index] >= (int)tmp.size())
            continue;
        std::vector<int>::iterator  it = std::lower_bound(_vector.begin(), _vector.end(), tmp[seq[index]].second);
        _vector.insert(it, tmp[seq[index]].second);
    }

    return;
}

void	PmergeMe::_dPutElement() {
	int	number;

	for (size_t i = 0; i < _size; i++) {		
		std::stringstream n(_elements[i]);
		n >> number;
		_deque.push_back(number);
	}

	return ;
}

void	PmergeMe::_dMerge(std::deque<std::pair<int, int> > &tmp,
            std::deque<std::pair<int, int> > &left,
            std::deque<std::pair<int, int> > &right) {
    int i = 0, j = 0, k = 0;
    while (i < (int)left.size() && j < (int)right.size()) {
        if (left[i].first < right[j].first) {
            tmp[k++] = left[i++];
        } else {
            tmp[k++] = right[j++];
        }
    }

    while (i < (int)left.size())
        tmp[k++] = left[i++];

    while (j < (int)right.size())
        tmp[k++] = right[j++];
}

void	PmergeMe::_dMergeSort(std::deque<std::pair<int, int> > &tmp) {
    if (tmp.size() > 1) {
        int mid = tmp.size() / 2;

        std::deque<std::pair<int, int> > left(tmp.begin(), tmp.begin() + mid);
        std::deque<std::pair<int, int> > right(tmp.begin() + mid, tmp.end());

        _dMergeSort(left);
        _dMergeSort(right);
        _dMerge(tmp, left, right);
    }
}

void	PmergeMe::_dMakePairs(std::deque<std::pair<int, int> > &tmp) {
	(_deque.size() % 2)	?	_impair = true
							: _impair = false;

	for (size_t i = 0; i < _deque.size() / 2; i++) {
		if (_deque.at(2 * i) < _deque.at(2 * i + 1))
			tmp.push_back(std::make_pair(_deque.at(2 * i), _deque.at(2 * i + 1)));
		else
			tmp.push_back(std::make_pair(_deque.at(2 * i + 1), _deque.at(2 * i)));
	}
	if (_impair)
		tmp.push_back(std::make_pair(INT_MAX, _deque.at(_deque.size() - 1)));

	_dMergeSort(tmp);

	return ;
}

void	PmergeMe::_dMakeMainChain(std::deque<std::pair<int, int> > &tmp) {
	_deque.clear();

	for (size_t i = 0; i < tmp.size(); i++)
		_deque.push_back(tmp.at(i).first);
	if (_impair)
		_deque.pop_back();

	return ;
}

void	PmergeMe::_dMakeSeq(std::deque<int> &seq, const size_t size) const {
	size_t	is_size = 0;
	for (size_t i = 2; is_size != size; i++) {
		if (_getJacobsthalIndex(i) - 1 < size)
			is_size++;
		seq.push_back(_getJacobsthalIndex(i) - 1);
		if (_getJacobsthalIndex(i) - _getJacobsthalIndex(i - 1) > 1) {
			for (size_t j = _getJacobsthalIndex(i) - 1; j != _getJacobsthalIndex(i - 1); j--) {
				seq.push_back(j - 1);
			if (j - 1 < size)
				is_size++;
			}
		}
	}

	return;
}

void PmergeMe::_dSortElements() {
    std::deque<std::pair<int, int> > tmp;
    _dMakePairs(tmp);
    _dMakeMainChain(tmp);

    size_t size = _size / 2;
    if (_impair)
        size = _size / 2 + 1;

    std::deque<int> seq;
    _dMakeSeq(seq, size);

    for (size_t index = 0; index < seq.size(); index++) {
        if (seq[index] >= (int)tmp.size())
            continue;
        std::deque<int>::iterator  it = std::lower_bound(_deque.begin(), _deque.end(), tmp[seq[index]].second);
        _deque.insert(it, tmp[seq[index]].second);
    }

    return;
}

void	PmergeMe::_isInfMax(size_t i) const {
	long long	number;

	std::stringstream n1(_elements[i]);
	n1 >> number;
	(number > INT_MAX) ? throw Error("\033[1;31mError\033[0m") : (void)0;

	return ;
}

void	PmergeMe::_isDigit(size_t i) const {
	for (size_t j = 0; j < std::string(_elements[i]).size(); j++) {
		if (_elements[i][j] == '+')
			j++;
		while (_elements[i][j] && std::isdigit(_elements[i][j]))
			j++;
		(_elements[i][j]) ? throw Error("\033[1;31mError\033[0m") : (void)0;
	}

	return ;
}

void	PmergeMe::_isValidNumber() const {
	for (size_t i = 0; i < _size; i++) {
		_isDigit(i);
		_isInfMax(i);
	}

	return ;
}

void	PmergeMe::mergeInsertionSort(int ac, char **av) {
	PmergeMe	pmergeme;
	clock_t	start;
	clock_t	end;

	pmergeme._size = ac - 1;
	pmergeme._elements = av + 1;

	pmergeme._isValidNumber();

	pmergeme._printBefore();

	start = clock();
	pmergeme._vPutElement();
	pmergeme._vSortElements();
	end = clock();
	pmergeme._vTime = end - start;

	start = clock();
	pmergeme._dPutElement();
	pmergeme._dSortElements();
	end = clock();
	pmergeme._dTime = end - start;

	pmergeme._printAfter();
	pmergeme._printTime();

	return ;
}