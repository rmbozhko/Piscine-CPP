/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 17:18:37 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/23 18:04:19 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Student.class.hpp"

// Use malloc for basic datatypes(int etc.) and new for custom datatypes
int		main(void)
{
	// Allocated on the stack, so once function is done,
	// its destructor will be called
	Student		andrew = Student("Andrew");
	// Constructor is called when we use mem. alloc. with 'new'
	Student		*roma = new Student("Roman");
	// Constructor isn't called when we use mem. alloc. with 'malloc'
	Student		*vova = (Student*)malloc(sizeof(Student));
	// Don't believe? Check out the output! There is only one constr. call
	
	// allocating an array of Student class instances
	Student		*students = new Student[42];
	
	vova->setName("Vova");	
	// string.size() of one below, is == 0, so nothing will be done to _name
	vova->setName("");

	std::cout << "Student's #1 name: " << roma->getName() << std::endl;
	std::cout << "Student's #2 name: " << vova->getName() << std::endl;

	// We cannot 'free' a memory, which was allocated using 'new'
	// free(roma); // prohibited
	// We cannot 'delete' a memory, which was allocated using 'malloc'
	// delete(vova); // prohibited
	
	// Destructor is called when we use mem. dealloc. with 'delete'
	delete roma; // roma is deleted
	// Destructor isn't called when we use mem. dealloc. with 'free'
	free(vova);

	// deleting an array of Student class objects
	delete [] students;
	
	std::cout << "All done!" << std::endl;
	
	return (0); // andrew is deleted
}
