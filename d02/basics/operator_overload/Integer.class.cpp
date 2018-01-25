/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 19:11:39 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/25 20:10:06 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"

Integer::Integer(const int n) : _value(n)
{
	std::cout << "Constructor is called" << std::endl;
	return ;
}

Integer::~Integer(void)
{
	std::cout << "Destructor is called" << std::endl;
	return ;
}

int		Integer::getValue(void) const
{
	return (this->_value);
}

Integer&		Integer::operator=(const Integer& temp)
{
	// the only way to assign something new to 'this'
	*this = temp;
	//this = &temp; // Error!
	return ((*this));
}

Integer			Integer::operator+(const Integer& temp) const
{
	Integer		i(this->getValue() + temp.getValue());
	return (i);
}

std::ostream&		operator<<(std::ostream &os, const Integer& temp)
{
	os << "Value: " << temp.getValue() << std::endl;
	return (os);
}
