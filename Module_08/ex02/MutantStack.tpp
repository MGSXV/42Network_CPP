/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 02:40:11 by sel-kham          #+#    #+#             */
/*   Updated: 2023/03/08 04:40:46 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __MUTANTSTACK_TPP__
# define __MUTANTSTACK_TPP__

#include "MutantStack.hpp"

template<class T, class Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin(void)
{
	return this->c.begin();
}

template<class T, class Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end(void)
{
	return this->c.end();
}

template<class T, class Container>
typename MutantStack<T, Container>::const_iterator	MutantStack<T, Container>::begin(void) const
{
	return this->c.begin();
}

template<class T, class Container>
typename MutantStack<T, Container>::const_iterator	MutantStack<T, Container>::end(void) const
{
	return this->c.end();
}

#endif