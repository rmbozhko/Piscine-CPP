/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 17:15:51 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/20 17:46:11 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	// we can use private mem. attr. and funct. cause I'm in my class constructor
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;
	this->publicBar();
	// we can use private mem. attr. and funct. cause I'm in my class constructor
	this->_privateBar();
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void		Sample::publicBar(void) const
{
	// we can use private mem. attr. inside public mem. functions
	std::cout << this->_privateFoo << std::endl;
	// we can use private mem. funct. inside public mem. functions
	this->_privateBar();
	std::cout << "Member function publicBar called" << std::endl;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	return ;
}

void		Sample::_privateBar(void) const
{
	std::cout << "Member function _privateBar called" << std::endl;
	std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;
	return ;
}
