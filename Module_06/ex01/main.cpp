/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:29:09 by sel-kham          #+#    #+#             */
/*   Updated: 2022/10/25 22:34:00 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef std::string	str_t;
typedef struct Data
{
	str_t			name;
	unsigned int	age;
	enum
	{
		M,
		F
	} gender;
}	Data;

uintptr_t serialize(Data* ptr)
{
	uintptr_t res = reinterpret_cast<std::uintptr_t>(ptr);
	return(res);
}

Data* deserialize(uintptr_t raw)
{
	Data *obj = reinterpret_cast<Data*>(raw);
	return(obj);
}

int	main(void)
{
	Data	*d = new Data();
	uintptr_t	ptr;

	d->name = "Lghoul";
	d->age = 2015;
	d->gender = d->M;
	
	ptr = serialize(d);
	Data *d2 = deserialize(ptr);
	std::cout << "Name	: " << d2->name << std::endl;
	std::cout << "Age	: " << d2->age << std::endl;
	std::cout << "Gander	: " << (d2->gender ? "Female" : "Male") << std::endl;
	delete d;
	return (0);
}
