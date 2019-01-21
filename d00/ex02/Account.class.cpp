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

    ss << getNbAccounts() << " " << getTotalAmount() << " " << getNbDeposits() << " " << getNbWithdrawals() << std::endl;
    std::cout << ss.str();
}
void	makeDeposit(int deposit)
{
    
}
bool	makeWithdrawal(int withdrawal);
int		checkAmount();
void	displayStatus();
static void _displayTimestamp();