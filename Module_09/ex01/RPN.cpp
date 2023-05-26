/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:27:02 by sel-kham          #+#    #+#             */
/*   Updated: 2023/05/26 15:23:27 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void	error_exit(const str_t &err_msg)
{
	std::cout << RED_COLOR << "ERROR: " << err_msg << DEFAULT_COLOR << std::endl;
	exit(EXIT_FAILURE);
}

void	ops_handler(char c, rpn_t &stk)
{
	int	a, b;
	if (stk.size() < 2)
		error_exit("Invalid input!");
	b = stk.top();
	stk.pop();
	a = stk.top();
	stk.pop();
	if (c == '+')
		a += b;
	else if (c == '-')
		a -= b;
	else if (c == '*')
		a *= b;
	else if (c == '/' && b != 0)
		a /= b;
	else
		error_exit("Dividing by 0!");
	stk.push(a);
}

void	decide(char c, rpn_t &stk)
{
	if (isdigit(c))
		stk.push(c - 48);
	else if (c == '-' || c == '+' || c == '*' || c == '/')
		ops_handler(c, stk);
	else if (c == ' ' || c == '\t' || c == '\n')
		return ;
	else
		error_exit("Invalid argument!");
}

void	parse(str_t input, rpn_t &stk)
{
	int	i;

	i = -1;
	while (input.size())
	{
		decide(input[0], stk);
		input.erase(0, 1);
	}
}