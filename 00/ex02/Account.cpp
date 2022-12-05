#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void){
	time_t now_time = time(NULL);
	struct tm* t = localtime(&now_time);

	std::cout << "[" ;
	std::cout << (t->tm_year + 1900) * 10000 + (t->tm_mon + 1) * 100 + t->tm_mday;
	std::cout << "_" ;
	std::cout << t->tm_hour * 10000 + t->tm_min * 100 + t->tm_sec;
	std::cout << "] ";
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