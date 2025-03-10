/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:23:38 by hakaraou          #+#    #+#             */
/*   Updated: 2025/02/11 10:30:03 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <queue>
# include <ctime>
# include <vector>
# include <string>
# include <sstream>
# include <climits>
# include <iostream>
# include <exception>
# include <algorithm>

# define RESET   	"\033[0m"
# define GREEN   	"\033[1;32m"
# define YELLOW  	"\033[1;33m"
# define WHITE		"\033[1;37m"
# define RED		"\033[1;31m"

class	PmergeMe {
		public:
	static void	mergeInsertionSort(int ac, char **av);

	class	Error : public std::exception {
			public:
		Error(const char *error);

		const char	*what() const throw();

			private:
		const char	*_error;
	};

		private:
	bool				_impair;
	size_t				_size;
	char				**_elements;
	double				_vTime;
	double				_dTime;
	std::deque<int> 	_deque;
	std::vector<int> 	_vector;

	PmergeMe();
	PmergeMe(int ac,char **av);
	PmergeMe(const PmergeMe &pmergeme);
	~PmergeMe();

	PmergeMe	&operator=(const PmergeMe &pmergeme);

	void	_vMerge(std::vector<std::pair<int, int> > &tmp,
            std::vector<std::pair<int, int> > &left,
            std::vector<std::pair<int, int> > &right);
	void	_vMergeSort(std::vector<std::pair<int, int> > &tmp);
	void	_vPutElement();
	void	_vMakePairs(std::vector<std::pair<int, int> > &tmp);
	void	_vSortElements();
	void	_vMakeMainChain(std::vector<std::pair<int, int> > &tmp);
	void	_vMakeSeq(std::vector<int> &seq, const size_t size) const;

	void	_dMerge(std::deque<std::pair<int, int> > &tmp,
            std::deque<std::pair<int, int> > &left,
            std::deque<std::pair<int, int> > &right);
	void	_dMergeSort(std::deque<std::pair<int, int> > &tmp);
	void	_dPutElement();
	void	_dMakePairs(std::deque<std::pair<int, int> > &tmp);
	void	_dMakeMainChain(std::deque<std::pair<int, int> > &tmp);
	void	_dMakeSeq(std::deque<int> &seq, const size_t size) const;
	void	_dSortElements();

	size_t	_getJacobsthalIndex(const size_t index) const;
	void	_isInfMax(const size_t i) const;
	void	_isDigit(const size_t i) const;

	void	_printTime() const;
	void	_printAfter() const;
	void	_printBefore() const;
	void	_isValidNumber() const;
};

#endif
