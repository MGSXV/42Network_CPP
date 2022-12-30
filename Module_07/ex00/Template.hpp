/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 18:36:08 by sel-kham          #+#    #+#             */
/*   Updated: 2022/12/30 19:08:48 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __TEMPLATE_H__
# define __TEMPLATE_H__

# include<iostream>

template <typename tt>
void	swap(tt &p1, tt &p2)
{
	tt	p;

	p = p1;
	p1 = p2;
	p2 = p;
}

template <typename tt>
tt	min(tt &p1, tt &p2)
{
	return (p1 < p2 ? p1 : p2);
}

template <typename tt>
tt	max(tt &p1, tt &p2)
{
	return (p1 > p2 ? p1 : p2);
}

#endif