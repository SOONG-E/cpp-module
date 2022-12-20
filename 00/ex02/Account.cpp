/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujelee <yujelee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:22:22 by yujelee           #+#    #+#             */
/*   Updated: 2022/12/20 15:12:02 by yujelee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void){
	char 		s[19];
	time_t 		now_time;
	struct tm 	*timeptr;

	now_time = time(NULL);
	timeptr = localtime(&now_time);
	strftime(s, sizeof(s),"[%Y%m%d_%H%M%S] ", timeptr);
	std::cout << s;
}

int	Account::getNbAccounts(void){
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void){
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void){
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void){
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout << "accounts:"<< getNbAccounts() <<";";
	std::cout << "total:"<< getTotalAmount() <<";";
	std::cout << "deposits:"<< getNbDeposits() <<";";
	std::cout << "withdrawals:"<< getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit){
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex <<";";
	std::cout << "p_amount:"<< checkAmount() <<";";
	std::cout << "deposit:"<< deposit <<";";
	_amount += deposit;
	_totalAmount += deposit;
	++_nbDeposits;
	++_totalNbDeposits;
	std::cout << "amount:"<< checkAmount() <<";";
	std::cout << "nb_deposits:"<< _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex <<";";
	std::cout << "p_amount:"<< checkAmount() <<";";
	std::cout << "withdrawal:";
	if (checkAmount() < withdrawal){
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal << ";";
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	++_nbWithdrawals;
	++_totalNbWithdrawals;
	std::cout << "amount:"<< checkAmount() << ";";
	std::cout << "nb_withdrawals:"<< _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount(void) const{
	return (_amount);
}
void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex << ";";
	std::cout << "amount:"<< checkAmount() << ";";
	std::cout << "deposits:"<< _nbDeposits << ";";
	std::cout << "withdrawals:"<< _nbWithdrawals << std::endl;
}

Account::Account(int initial_deposit ){
	_accountIndex = Account::_nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex <<";";
	std::cout << "amount:"<< _amount <<";";
	std::cout << "created" << std::endl;
}

Account::~Account(void){
	_displayTimestamp();
	std::cout << "index:"<< _accountIndex <<";";
	std::cout << "amount:"<< _amount <<";";
	std::cout << "closed" << std::endl;
}