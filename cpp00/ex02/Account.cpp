#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){
	this->_totalAmount += this->_amount;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
	return ;
}

void	Account::displayAccountsInfos( void ){
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";;
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

Account::~Account( void ){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit ){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << ++this->_nbDeposits << ";" << std::endl;
	Account::_totalNbDeposits += this->_nbDeposits;
}

bool	Account::makeWithdrawal( int withdrawal ){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (withdrawal > this->_amount)
		std::cout << "withdrawal:refused" << std::endl;
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << ++this->_nbWithdrawals << std::endl;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += this->_nbWithdrawals;
	}
	return (0);
}

int	Account::getTotalAmount( void ){
	return (Account::_totalAmount);
}

int	Account::getNbAccounts( void ){
	return (Account::_nbAccounts);
}

int	Account::getNbDeposits( void ){
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return (Account::_totalNbWithdrawals);
}


int		Account::checkAmount( void ) const{
	return (Account::_nbAccounts);
}


void	Account::_displayTimestamp( void ){
	time_t timer;
	char buffer[36];

	time(&timer);
	strftime(buffer, 36, "[%Y%m%d_%H%M%S] ", localtime(&timer));
	std::cout << buffer;
	return ;
}