/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 05:14:59 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/13 17:22:52 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	leaks_check(void)
{
	system("leaks animal");
}

int    main(void)
{
	// atexit(leaks_check);
	
	// * this is the required test
	// const Animal* griffin = new Animal();
	// std::cout << "--------------------------------" << std::endl;
	// const Animal* dog = new Dog();
	// std::cout << "--------------------------------" << std::endl;
	// const Animal* cat = new Cat();
	// std::cout << "--------------------------------" << std::endl;

	// std::cout << cat->getType() << " " << std::endl;
	// cat->makeSound(); //will output the cat sound!
	// std::cout << std::endl;
	// std::cout << dog->getType() << " " << std::endl;
	// dog->makeSound();
	// std::cout << std::endl;
	// griffin->makeSound();
	// delete griffin;
	// delete dog;
	// delete cat;

	//----------------------------------------------------------------
	// const Animal*	griffin = new Animal();
	// const Dog*		dog = new Dog();
	// const Cat*        cat = new Cat();

	// std::cout << std::endl;
	// std::cout << cat->getType() << " " << std::endl;
	// cat->makeSound();
	// std::cout << std::endl;
	// std::cout << dog->getType() << " " << std::endl;
	// dog->makeSound();
	// std::cout << std::endl;
	// std::cout << griffin->getType() << " " << std::endl;
	// griffin->makeSound();
	// delete griffin;
	// delete dog;
	// delete cat;

	//----------------------------------------------------------------
	// Animal	griffin = Animal();
	// std::cout << "--------------------------------" << std::endl;
	// Animal	cat = Cat();
	// std::cout << "--------------------------------" << std::endl;
	// Animal	dog = Dog();
	// std::cout << "--------------------------------" << std::endl;

	// std::cout << std::endl;
	// std::cout << cat.getType() << " " << std::endl;
	// cat.makeSound();
	// std::cout << std::endl;
	// std::cout << dog.getType() << " " << std::endl;
	// dog.makeSound();
	// std::cout << std::endl;
	// std::cout << griffin.getType() << " " << std::endl;
	// griffin.makeSound();


	const WrongAnimal* griffin = new WrongAnimal();
	std::cout << "--------------------------------" << std::endl;
	const WrongAnimal* cat = new WrongCat();
	std::cout << "--------------------------------" << std::endl;

	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound(); //will output the cat sound!
	std::cout << std::endl;
	griffin->makeSound();
	delete griffin;
	delete cat;
	return (0);
}