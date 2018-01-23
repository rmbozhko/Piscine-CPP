/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Temple.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 14:40:11 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/23 14:46:14 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Temple.class.hpp"
#include <iostream>

Temple::Temple(void) : foo(1024)
{
	std::cout << "Constructor is called" << std::endl;
	return ;
}

Temple::~Temple(void)
{
	std::cout << "Destructor is called" << std::endl;
	return ;
}

void		Temple::bar(void) const
{
	std::cout << "Member function bar is called" << std::endl;
	return ;
}
