/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 20:19:41 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/25 20:57:35 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void) : _foo(0)
{
	std::cout << "Default constructor is called" << std::endl;
	return ;
}

Sample::Sample(const int n) : _foo(n)
{
	std::cout << "Parametric constructor is called" << std::endl;
	return ;
}

Sample::Sample(const Sample& temp)
{
	std::cout << "Copy constructor is called" << std::endl;
	*this = temp;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Constructor is called" << std::endl;
	return ;
}

int			Sample::getFoo(void) const
{
	return (this->_foo);
}

void		Sample::setFoo(int n)
{
	this->_foo = n;
	return ;
}

Sample&		Sample::operator=(const Sample& temp)
{
	std::cout << "HEre!" << std::endl;
	if (&temp != this)
	{
		std::cout << "Losser!" << std::endl;
		*this = temp;
	}
	/*if (&temp != this)
	{
		this->setFoo(temp.getFoo());
		// OR
		this->_foo = temp.getFoo();
	}*/
	std::cout << "Lool" << std::endl;
	return ((*this));
}

std::ostream&		operator<<(std::ostream& os, const Sample& temp)
{
	os << "Foo's value: " << temp.getFoo() << std::endl;
	return (os);
}
