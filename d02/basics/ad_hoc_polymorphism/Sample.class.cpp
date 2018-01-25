/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 18:39:02 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/25 18:52:50 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

Sample::Sample(void)
{
	std::cout << "Constructor is called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor is called" << std::endl;
	return ;
}

void		Sample::bar(const char c) const
{
	std::cout << "Member function bar called with char overload: " << c << std::endl;
	return ;
}

void		Sample::bar(const int i) const
{
	std::cout << "Member function bar called with int overload: " << i << std::endl;
	return ;
}

void		Sample::bar(const float f) const
{
	std::cout << "Member function bar called with float overload: " << f << std::endl;
	return ;
}

void		Sample::bar(const Sample &instance) const
{
	// we don't use '&' address operator towards 'this', as it's a pointer
	// so its value is an address of calling object
	if (&instance == this)
		std::cout << "Passed instance and calling instance is the same" << std::endl;
	else
		std::cout << "Passed instance and calling instance are different" << std::endl;

	std::cout << "Member function bar called with Sample class overload" << std::endl;
	return ;
}
