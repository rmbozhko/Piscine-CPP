/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 15:45:01 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/22 17:29:56 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"
#include <array>
/*
 * All the same:
 * instance variables and functions
 * class variables and functions
 * non member attributes and functions
 *
 * Member function or attribute is something that present in each instance of a class, that means the class needs to be instantiated to get access to those.
 * By instantiating a class we got several different copies, which knows nothing about other instances of same class. But no matter how many examples of a class we'll make the non member attributes and functions will remains same, equal to one(1).
 * 
 * Member attributes and functions exist on instance level. It means, they could only be accessed within the instance.
 * So, first you should create instance of a class:
 * Sample 		instance;
 * And than access any of member attributes or functions:
 * instance->mem_attr; instance->mem_funct();
 *
 * Non member attributes and functions exist on class level. It means, they could only be accessed within the class.
 * Sample::non_mem_attr; Sample::non_mem_funct();
 *
 */
int			main(void)
{
	// we can access non member functions and attributes
	// without making instances of a class
	std::cout << Sample::getnbInst() << std::endl;

	// Creating an array of ten instances of Sample class
	std::array<Sample, 10> (arr);
	
	// isn't allowed, as _nbInst is private
	//std::cout << Sample::_nbInst << std::endl;
	std::cout << "Number of created instances: "
		<< Sample::getnbInst() << std::endl;
	return (0);
}
