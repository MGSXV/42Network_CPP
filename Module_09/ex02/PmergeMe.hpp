/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:38:44 by sel-kham          #+#    #+#             */
/*   Updated: 2023/05/22 21:17:58 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __PMERGEME_HPP__
# define __PMERGEME_HPP__

# include<iostream>
# include<deque>
# include<vector>
# include<sstream>

# define RED_COLOR "\033[0;31m"
# define DEFAULT_COLOR "\033[0;37m"
# define MINIMSIZE 700

typedef std::string str_t;
typedef std::vector<int> vector_t;
typedef std::deque<int> deque_t;

void	exit_error(const str_t &err_msg);
int		parser(str_t num);
void	analyzer(vector_t &v, deque_t &l, uint64_t &start, int argc);
uint64_t micros(void);

#endif