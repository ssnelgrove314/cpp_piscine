#include "Account.class.hpp"
#include <string>
#include <sstream>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account() {};

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	
	_totalAmount += initial_deposit;
	_nbAccounts += 1;
	
	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";created"
	<< std::endl;
};

Account::~Account()
{
	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";closed"
	<< std::endl;
};

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void )
{    
	_displayTimestamp();
	std::cout
		<< "accounts:" <<_nbAccounts
		<< ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals
		<< std::endl;
}
void	Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex
		<< ";p_amount:" << _amount - deposit
		<< ";deposit:" << deposit
		<< ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits
		<< std::endl;
}
bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (_amount < withdrawal)
	{
		std::cout
			<< "index:" << _accountIndex
			<< ";p_amount:" << _amount
			<< ";withdrawal:refused"
			<< std::endl;
		return (false);
	}
	else
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout
			<< "index:" << _accountIndex
			<< ";p_amount:" << _amount + withdrawal
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals
			<< std::endl; 
		return (true);
	}
}
int		Account::checkAmount() const
{
	return (_amount);
}
void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout
		<< "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals
		<< std::endl;;
}
void	Account::_displayTimestamp( void )
{
	std::cout << "[20150406_153629] ";
}