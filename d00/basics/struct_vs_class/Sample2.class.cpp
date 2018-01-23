/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 14:24:15 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/22 14:28:48 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

Sample2::Sample2(void) : foo(25)
{
	std::cout << "Class constructor is called" << std::endl;
	this->bar();
	return ;
}

Sample2::~Sample2(void)
{
	std::cout << "Class destructor is called" << std::endl;
	return ;
}

void		Sample2::bar(void) const
{
	std::cout << "this->foo in class: " << this->foo << std::endl;
	return ;
}
