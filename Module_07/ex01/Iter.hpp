/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 15:50:28 by sel-kham          #+#    #+#             */
/*   Updated: 2022/12/31 16:31:32 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ITER_HPP__
# define __ITER_HPP__

# include<iostream>

template <typename tt>
void	iter(tt arr[], size_t len, void (*f)(tt &m))
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

#endif