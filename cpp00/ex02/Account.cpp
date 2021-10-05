#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){
	this->_totalAmount += this->_amount;
	Account::_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
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
}

void	Account::makeDeposit( int deposit ){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount; << ";";
	std::cout << "deposits:" << ++this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
	}
/*
	int	Account::getNbAccounts( void ){

	}

	int	Account::getTotalAmount( void ){

	}
	int	Account::getNbDeposits( void ){

	}
	int	Account::getNbWithdrawals( void ){

	}

	bool	Account::makeWithdrawal( int withdrawal ){

	}

	int		Account::checkAmount( void ) const{

	}
*/

	void	Account::_displayTimestamp( void ){
		time_t timer;
		char buffer[36];

		time(&timer);
		strftime(buffer, 36, "[%Y%m%d_%H%M%S] ", localtime(&timer));
		std::cout << buffer;
  		return ;
	}