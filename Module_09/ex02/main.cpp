/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:38:58 by sel-kham          #+#    #+#             */
/*   Updated: 2023/05/22 17:22:55 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int c, char **v)
{
	vector_t	vec;
	deque_t		lst;
	int			n;
	int			i;

	if (c < 3)
		exit_error("Invalid number of arguments!");
	i = 0;
	uint64_t start = micros();
	while (v[++i])
	{
		n = parser(v[i]);
		vec.push_back(n);
		lst.push_back(n);
	}
	analyzer(vec, lst, start, c - 1);
	return (EXIT_SUCCESS);
}
