/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassC.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 23:07:36 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/26 00:00:09 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ClassC_H__
# define __ClassC_H__

# include<iostream>
# include "Base.hpp"

typedef std::string	str_t;

class	ClassC : public Base
{
	public:
		~ClassC(void);
};

#endif