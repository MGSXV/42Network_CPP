/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:26:59 by sel-kham          #+#    #+#             */
/*   Updated: 2023/05/16 23:57:00 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __RPN_HPP__
# define __RPN_HPP__

#include <iostream>
#include <stack>

# define RED_COLOR "\033[0;31m"
# define DEFAULT_COLOR "\033[0;37m"

typedef std::string str_t;
typedef std::stack<int> rpn_t;

void	parse(str_t input, rpn_t &stack);
void	error_exit(const str_t &err_msg);

#endif