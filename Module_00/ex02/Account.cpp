/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 02:24:53 by sel-kham          #+#    #+#             */
/*   Updated: 2022/09/29 16:15:13 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include  "Account.hpp"

// Constructors and destructors

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	Account::_nbAccounts = Account::getNbAccounts() + 1;
	Account::_totalAmount = Account::getTotalAmount() + initial_deposit;
	Account::_displayTimestamp();
	this->_accountIndex = Account::getNbAccounts() - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() \
			<< ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() \
			<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	this->_nbDeposits++;
	this->_amount += deposit;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit \
			<< ";deposit:" << deposit << ";amount:" << this->_amount \
			<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if (this->_amount < withdrawal)
	{
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount \
				<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal \
			<< ";withdrawal:" << withdrawal << ";amount:" << this->_amount \
			<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount \
			<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals \
			<< std::endl;
}

void	Account::_displayTimestamp(void)
{
	char		buff[18];
	time_t		time_as_num;
	struct tm	*time_c;

	time(&time_as_num);
	time_c = localtime(&time_as_num);
	strftime(buff, 18, "[%G%m%d_%H%M%S]", time_c);
	std::cout << buff;
}
