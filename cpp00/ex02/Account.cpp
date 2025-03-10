/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:09:49 by hakaraou          #+#    #+#             */
/*   Updated: 2024/07/30 14:37:45 by hakaraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void) {
	return (_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();

	std::cout	<< "accounts:" << getNbAccounts() << ";"
				<< "total:" << getTotalAmount() << ";"
				<< "deposits:" << getNbDeposits() << ";"
				<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_desposit) {
	_amount = initial_desposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts++;
	_totalAmount += initial_desposit;

	_displayTimestamp();

	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "create" << std::endl;
}

Account::~Account(void) {
	_displayTimestamp();

	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "closed" << std::endl;

	_nbAccounts--;
	_totalAmount -= _amount;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();

	std::cout	<< "index:" << _accountIndex << ";"
				<< "p_amount:" << _amount << ";"
				<< "deposit:" << deposit << ";";

	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_amount += deposit;

	std::cout	<< "amount:" << _amount << ";"
				<< "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();

	std::cout	<< "index:" << _accountIndex << ";"
				<< "p_amount:" << _amount << ";";

	if (withdrawal > _amount)
		return (std::cout << "refused" << std::endl, false);

	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_amount -= withdrawal;

	std::cout	<< "withdrawal:" << withdrawal << ";"
				<< "amount:" << _amount << ";"
				<< "nb_deposits:" << _nbDeposits << std::endl;

	return (true);
}

int	Account::checkAmount(void) const {
	return (_amount);
}

void	Account::displayStatus(void) const {
	_displayTimestamp();

	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "deposit:" << _nbDeposits << ";"
				<< "withdrawal:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void) {
    std::time_t time_now = std::time(NULL);
    std::tm *local_time = std::localtime(&time_now);

	char buffer[19];
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", local_time);
	buffer[18] = '\0';

	std::cout << buffer;
}

Account::Account(void) {
	_accountIndex = _nbAccounts++;
	_amount = 0;

	_displayTimestamp();

	std::cout<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "create" << std::endl;
}
