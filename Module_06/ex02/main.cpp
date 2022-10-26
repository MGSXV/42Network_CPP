/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 23:06:08 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/26 01:11:17 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

int	main(void)
{
	Base *b = generate();
	identify(b);
	identify(*b);
	delete b;
	return (0);
}

Base*	generate(void)
{
	int		num;
	Base*	base;

	srand((unsigned int) time(NULL));
	num = 1 + rand() % 3;
	try
	{
		switch (num)
		{
			case 1:
				base = new ClassA();
				break ;
			case 2:
				base = new ClassB();
				break ;
			case 3:
				base = new ClassC();
				break ;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		exit(EXIT_FAILURE);
	}
	return (base);
}

void	identify(Base* p)
{
	ClassA *objA = dynamic_cast<ClassA*>(p);

	if(objA)
	{
		std::cout << "The pointer passed as a parameter is a pointer to a *ClassA* object!" << std::endl;
		return ;
	}
	ClassB *objB = dynamic_cast<ClassB*>(p);
	if(objB)
	{
		std::cout << "The pointer passed as a parameter is a pointer to a *ClassB* object!" << std::endl;
		return ;
	}
	ClassC *objC = dynamic_cast<ClassC*>(p);
	if(objC)
	{
		std::cout << "The pointer passed as a parameter is a pointer to a *ClassC* object!" << std::endl;
		return ;
	}
}

void	identify(Base& p)
{
	try
	{
		ClassA &objA = dynamic_cast<ClassA&>(p);
		std::cout << "The reference passed as a parameter is a reference to a *ClassA* object!" << std::endl;
		(void) objA;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		ClassB &objB = dynamic_cast<ClassB&>(p);
		std::cout << "The reference passed as a parameter is a reference to a *ClassB* object!" << std::endl;
		(void) objB;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		ClassC &objC = dynamic_cast<ClassC&>(p);
		std::cout << "The reference passed as a parameter is a reference to a *ClassC* object!" << std::endl;
		(void) objC;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	
}
