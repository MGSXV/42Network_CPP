/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:25:47 by sel-kham          #+#    #+#             */
/*   Updated: 2023/05/17 00:08:33 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int c, char **v)
{
	rpn_t	rpn;

	if (c != 2)
		error_exit("Invalid number of arguments!");
	if (!v[1][0])
		error_exit("Invalid arguments!");
	parse(v[1], rpn);
	if (rpn.size() != 1)
		error_exit("Invalid RPN!");
	std::cout << rpn.top() << std::endl;
	return (EXIT_SUCCESS);
}
