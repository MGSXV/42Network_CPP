/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 23:59:11 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/26 00:54:32 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"

Base::~Base(void) {}
ClassA::~ClassA(void) { std::cout << "Class A" << std::endl; }
ClassB::~ClassB(void) { std::cout << "Class B" << std::endl; }
ClassC::~ClassC(void) { std::cout << "Class C" << std::endl; }
