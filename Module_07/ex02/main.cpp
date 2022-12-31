/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 16:38:21 by sel-kham          #+#    #+#             */
/*   Updated: 2022/12/31 18:51:23 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	int *arr = new int[100];
	Array<int> a = Array<int>(100);

	for (int i = 0; i < 100; i++)
	{
	    arr[i] = i + 1;
		a[i] = i * 2;
	}
		
	for (int i = 0; i < 100; i++)
		std::cout << a[i] << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << a.size() << std::endl;
	// Array<int> b(arr);
	
	return (0);
}
