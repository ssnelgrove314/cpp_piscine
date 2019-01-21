#include "Account.class.hpp"
#include <string>
#include <sstream>
#include <iostream>

Account::Account(int initial_deposit) {

};

Account::~Account() {};

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
    std::stringstream ss;
    ss <<
        getNbAccounts() << " " <<
        getTotalAmount() << " " <<
        getNbDeposits() << " " <<
        getNbWithdrawals() << std::endl;
    std::cout << ss.str();
}
void	Account::makeDeposit(int deposit)
{
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
}
bool	Account::makeWithdrawal(int withdrawal)
{
    if (_amount > withdrawal)
        return (false);
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
}
int		Account::checkAmount() const
{
    return (_amount);
}
void	Account::displayStatus() const
{
    std::stringstream ss;
    ss <<
        getNbAccounts() << " " <<
        getTotalAmount() << " " <<
        getNbDeposits() << " " <<
        getNbWithdrawals() << std::endl;
    std::cout << ss.str();


}
static void _displayTimestamp();