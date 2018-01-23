/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 15:04:40 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/22 15:11:45 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(int v) : _foo(v)
{
	std::cout << "Constructor is called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor is called" << std::endl;
	return ;
}

void		Sample::setFoo(int n)
{
	if (n >= 0)
		this->_foo = n;
	else
		this->_foo = 0;
	return ;
}

int			Sample::getFoo(void) const
{
	return (this->_foo);
}

int			Sample::compare(Sample *that) const
{
	// we cannot use that->_foo as _foo is private 
	// thus it can be only used within the class
	if (this->_foo > that->getFoo())
		return (1);
	else if (this->_foo < that->getFoo())
		return (-1);
	return (0);
}
