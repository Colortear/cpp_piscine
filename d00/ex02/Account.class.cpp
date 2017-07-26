/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 15:03:22 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/03 19:26:11 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Account.class.hpp"

int		Account::_nbAccounts;
int		Account::_totalAmount;
int		Account::_totalNbDeposits;
int		Account::_totalNbWithdrawals;

int		Account::getNbAccounts(void) {

	return (Account::_nbAccounts);
}

int		Account::getTotalAmount(void) {
	
	return (Account::_totalAmount);
}

int		Account::getNbDeposits(void) {

	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals(void) {

	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {

	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";amount:" << getTotalAmount() <<
		";deposits:" << getNbDeposits() << ";withdrawals:"
		<< getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit) {

	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_nbAccounts++;
	this->_accountIndex = getNbAccounts() - 1;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << (int)this->_accountIndex << ";amount:"
		<< (int)this->_amount << ";created" << std::endl;
	return ;
}

Account::~Account(void) {

	_nbAccounts--;
	_totalAmount -= this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << (int)this->_accountIndex << ";amount:"
		<< this->_amount << ";closed" << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit) {

	Account::_displayTimestamp();
	std::cout << "index:" << (int)this->_accountIndex << ";p_amount:"
		<< (int)this->_amount << ";deposit:" << (int)deposit;
	_totalAmount += deposit;
	this->_amount += deposit;
	_totalNbDeposits++;
	this->_nbDeposits++;
	std::cout << ";amount:" << (int)this->_amount << ";nb_deposits:"
		<< this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {

	bool	ret;

	ret = true;
	Account::_displayTimestamp();
	std::cout << "index:" << (int)this->_accountIndex << ";p_amount:"
		<< (int)this->_amount << ";withdrawal:";
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "refused";
		ret = false;
	}
	else
	{
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		std::cout << (int)withdrawal << ";" << "amount:" << (int)this->_amount
			<< ";nb_withdrawals:" << (int)this->_nbWithdrawals;
	}
	std::cout << std::endl;
	return (ret);
}

int		Account::checkAmount(void) const {

	return (this->_amount);
}

void	Account::displayStatus(void) const {

	Account::_displayTimestamp();
	std::cout << "index:" << (int)this->_accountIndex << ";amount:"
		<< (int)this->_amount << ":deposits:" << (int)this->_nbDeposits
		<< ";withdrawals:" << (int)this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void) {

	time_t		rawtime;
	struct tm	*timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	std::cout << "[" << timeinfo->tm_year + 1900 << std::setfill('0') << std::setw(2)
		<< timeinfo->tm_mon + 1 << std::setfill('0') << std::setw(2) << timeinfo->tm_mday
		<< "_" << std::setfill('0') << std::setw(2) << timeinfo->tm_hour << std::setfill('0')
		<< std::setw(2) << timeinfo->tm_min << std::setfill('0') << std::setw(2) <<
		timeinfo->tm_sec << "] ";
}

Account::Account(void) {

	_nbAccounts = 0;
	_totalAmount = 0;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	return ;
}
