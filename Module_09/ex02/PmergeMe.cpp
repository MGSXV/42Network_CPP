/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:38:52 by sel-kham          #+#    #+#             */
/*   Updated: 2023/05/22 17:29:49 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	exit_error(const str_t &err_msg)
{
	std::cout << RED_COLOR << "ERROR: " << err_msg << DEFAULT_COLOR << std::endl;
	exit(EXIT_FAILURE);
}

static str_t inToString(int number){
    std::stringstream ss;
    str_t outString;

    ss << number;
    ss >> outString;
	return (outString);
}

int	parser(str_t num)
{
	int	i;
	int	n;
	str_t	tmp;

	i = -1;
	if (!num.size())
		exit_error("Invalid argument: " + num);
	while (num[++i])
	{
		if (!isdigit(num[i]))
			exit_error("Invalid argument: " + num);
		n = atoi(num.c_str());
		tmp = inToString(n);
		if (tmp != num)
			exit_error("Invalid argument: " + num);
	}
	return (n);
}

template <typename T>
static void	printNumbers(const str_t &suffix, T &c)
{
	typename T::iterator i = c.begin();
	std::cout << suffix;
	while (i != c.end())
	{
		std::cout << " " << *i;
		i++;
	}
	std::cout << std::endl;
}

static void	insertionSortVector(vector_t &v)
{
	int	i;
	int	j;
	int	size;
	int	tmp;

	i = 1;
	size = v.size();
	while (i < size)
	{
		tmp = v[i];
		j = i - 1;
		while (tmp < v[j] && j >= 0)
		{
			v[j + 1] = v[j];
			j--;
		}
		v[j + 1] = tmp;
		i++;
	}
}

static void	insertionSortDeQue(deque_t &d)
{
	int	i;
	int	j;
	int	size;
	int	tmp;

	size = d.size();
	i = 0;
	while (++i < size)
	{
		tmp = d[i];
		j = i - 1;
		while (j >= 0 && tmp < d[j])
		{
			d[j + 1] = d[j];
			j--;
		}
		d[j + 1] = tmp;
	}
}

static void	mergeSortVector(vector_t &arr)
{
	int size = arr.size();
	if (size < MINIMSIZE)
	{
		insertionSortVector(arr);
		return ;
	}
	vector_t	l(arr.begin(), arr.begin() + size / 2);
	vector_t	r(arr.begin() + size / 2, arr.end());
	mergeSortVector(l);
	mergeSortVector(r);
	int	l_size = l.size();
	int r_size = r.size();
	int	i = 0, j = 0, k = 0;
	while (i < l_size && j < r_size)
	{
		if (l[i] <= r[j])
			arr[k] = l[i++];
		else
			arr[k] = r[j++];
		k++;
	}
	while (i < l_size)
	{
		arr[k] = l[i++];
		k++;
	}
	while (j < r_size)
	{
		arr[k] = r[j++];
		k++;
	}
}

static void	mergeSortDeQue(deque_t &arr)
{
	int size = arr.size();

	if (size < MINIMSIZE)
	{
		insertionSortDeQue(arr);
		return ;
	}
	deque_t	l(arr.begin(), arr.begin() + size / 2);
	deque_t	r(arr.begin() + size / 2, arr.end());
	mergeSortDeQue(l);
	mergeSortDeQue(r);
	int	l_size = l.size();
	int r_size = r.size();
	int	i = 0, j = 0, k = 0;
	while (i < l_size && j < r_size)
	{
		if (l[i] <= r[j])
			arr[k] = l[i++];
		else
			arr[k] = r[j++];
		k++;
	}
	while (i < l_size)
	{
		arr[k] = l[i++];
		k++;
	}
	while (j < r_size)
	{
		arr[k] = r[j++];
		k++;
	}
}

uint64_t micros(void)
{
    uint64_t us = std::chrono::duration_cast<std::chrono::microseconds>(
            std::chrono::high_resolution_clock::now().time_since_epoch())
            .count();
    return us; 
}


void	analyzer(vector_t &v, deque_t &l, uint64_t &start, int argc)
{
	uint64_t	end;

	printNumbers("Before: ", v);
	end = micros();
	mergeSortVector(v);
	end = micros() - end;
	printNumbers("After : ", v);
	std::cout << "Time to process a range of " << argc << " elements with std::vector : " << micros() - start << " us" << std::endl;
	mergeSortDeQue(l);
	std::cout << "Time to process a range of " << argc << " elements with std::deque : " << micros() - start - end << " us" << std::endl;
}