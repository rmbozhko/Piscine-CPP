/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 17:37:59 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/23 16:10:26 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"
#include "Temple.class.hpp"

namespace	Test
{
	int		foo;
};

int		main(void)
{
	Sample		temp(25);
	Sample		instance(0);
	// plain pointer to Sample class instance
	Sample		*instance_ptr = &instance;

	// Two lines below are special way to declare pointers to
	// member attributes and functions in C++
	// declaring a pointer to an integer member of a Sample class
	int			Sample::*p = NULL;
	// declaring a pointer to a function member of a Sample class
	void		(Sample::Sample::Sample::*f)(void) const;

	// this declaration is not specified yet, 
	// that means to change the value of 'foo' attr. 
	// we need to specify 'this' (changeable object)
	p = &Sample::foo;
	// to get what instance foo attribute 'p' points to, we need to specify it
	// instance_var_name.*mem_ptr or instance_ptr_var_name->*mem_ptr
	temp.*p = 12;
	std::cout << "Value of member foo: " << temp.foo << std::endl;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance_ptr->*p = 42;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	temp.*p = -127;
	std::cout << "Value of member foo: " << temp.foo << std::endl;

	// assigning the address of location to point, 
	// but this location as with class attrs. is not specified yet
	f = &Sample::bar;
	// specified call of function of certain class instance
	(instance.*f)();
	(instance_ptr->*f)();

	// Working with another class
	Temple		hram;
	int			Temple::*foo_temple_ptr;
	void		(Temple::*f_ptr)(void) const;

	foo_temple_ptr = NULL;
	foo_temple_ptr = &Temple::foo;

	foo_temple_ptr = &Temple::foo;
	std::cout << hram.*foo_temple_ptr << std::endl;

	f_ptr = &Temple::bar;
	(hram.*f_ptr)();

	// Working with integer values from namespace
	// We omit namespace_name::*ptr_name, as for a class, 
	// while working with namespaces
	int			*foo_ptr;

	foo_ptr = NULL;
	Test::foo = 0;
	std::cout << "Test::foo: " << Test::foo << std::endl;
	foo_ptr = &Test::foo;
	*foo_ptr = 12;
	std::cout << "*foo_ptr: " << *foo_ptr << std::endl;
	
	// Working on pointer to static(non member) attribute of a class
	// as far as there can only be on instance of class variable - test
	// we can assign its address to a plain 'int' pointer 
	int *static_p = &Sample::test;
	*static_p = -2147483647;
	std::cout << "Non member attribute test: " << *static_p << std::endl;
	return (0);
}
