/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:47:39 by mjeyavat          #+#    #+#             */
/*   Updated: 2022/04/30 21:40:03 by mjeyavat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::getNbAccounts( void ) {return(_nbAccounts);}
int Account::getTotalAmount(void) {return(_totalAmount);}
int Account::getNbDeposits(void) {return(_totalNbDeposits);}
int Account::getNbWithdrawals(void) {return(_totalNbWithdrawals);}

void Account::makeDeposit( int deposit )
{
    this->_amount = deposit;
    this->_totalNbDeposits += 1;
}

bool Account::makeWithdrawal( int withdrawal )
{
    if (this->getTotalAmount() > withdrawal)
    {
        this->_amount -= withdrawal;
        this->_nbWithdrawals += 1;
        return (true);
    }
    return (false);
}

int Account::checkAmount( void ) const
{
    return(this->_amount);
}


/*[19920104_091532] index:0;amount:42;created*/
// void t::displayStatus(void) const
// {
 
// }

