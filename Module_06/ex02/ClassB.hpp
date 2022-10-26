/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 23:11:18 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/25 23:59:58 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ClassB_H__
# define __ClassB_H__

# include<iostream>
# include "Base.hpp"

typedef std::string	str_t;

class	ClassB : public Base
{
	public:
		~ClassB(void);
};

#endif