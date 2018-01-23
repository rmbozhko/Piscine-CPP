/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 14:34:05 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/22 14:48:25 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(void) : _foo(12)
{
	std::cout << "Constructor is called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor is called" << std::endl;
	return ;
}

int			Sample::getFoo(void) const
{
	std::cout << "this->_foo: " << this->_foo << std::endl;
	return (this->_foo);
}

// Using setters we can specify values to be assign to private attributes
void		Sample::setFoo(int n)
{
	if (n >= 0)
	{
		std::cout << "this->_foo is changed from " << this->_foo;
		this->_foo = n;
		std::cout << " to " << this->_foo << std::endl;
	}
	else
		std::cout << "Passed value is unpropriate: " << n << std::endl;
	std::cout << "this->_foo: " << this->_foo << std::endl;
	return ;
}
