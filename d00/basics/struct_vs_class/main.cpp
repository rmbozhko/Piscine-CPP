/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 14:11:32 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/22 14:28:07 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"
#include "Sample2.class.hpp"

int		main(void)
{
//	Structures and classes work the exactly same way in C++. 
//	Difference between structure and class in C++ is in their default visibility scope.
//	By default, all member attributes and functions in structure are public, whilst in class if visibility scope is not specified all mem. attrs. and funct. belong to private scope.
	// Everything that you can do with class in C++ can also be done with structures.
	Sample1		instance1;
	Sample2		instance2;

	instance1.bar();
	//instance2.bar(); // cannot be called as is private
	return (0);
}
