/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 05:14:59 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/17 05:29:40 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


void	leaks_check(void)
{
	system("leaks brain");
}

int    main(void)
{
	atexit(leaks_check);
	
	// Animal* griffin = new Animal();
	// Cat* cat = new Cat();
	// Dog* dog = new Dog();
	// Dog* dog3 = new Dog(*dog);


	// dog->setType("Bulldog");
	// Animal* dog2 = new Dog();
	// *dog2 = *dog;
	// std::cout << "Griffin's type : " << griffin->getType() << std::endl;
	// std::cout << "Cat's type : " << cat->getType() << std::endl;
	// std::cout << "Dog's type : " << dog->getType() << std::endl;
	// std::cout << "Dog2's type : " << dog2->getType() << std::endl;
	// dog->setType("Dog");
	// std::cout << "Dog's type : " << dog->getType() << std::endl;
	// std::cout << "Dog2's type : " << dog2->getType() << std::endl;
	// std::cout << "Dog3's type : " << dog3->getType() << std::endl;
	// delete griffin;
    // delete cat;
    // delete dog;
    // delete dog2;
    // delete dog3;



	// Animal* griffin = new Animal();
	// Animal* cat = new Cat();
	// Animal* dog = new Dog();
	// Dog* dog1 = new Dog();

	// std::cout << sizeof(*griffin) << std::endl;
	// std::cout << sizeof(*cat) << std::endl;
	// std::cout << sizeof(*dog) << std::endl;
	// std::cout << sizeof(*dog1) << std::endl;

	// delete griffin;
	// delete cat;
	// delete dog;
	// delete dog1;


	Animal* griffin[10];
	int i;

	i = -1;
	while (++i < 10)
	{
		if (i < 5)
			griffin[i] = new Cat();
		else
			griffin[i] = new Dog();
	}
	i = -1;
	while (++i < 10)
		delete griffin[i];
	
	return (0);
}