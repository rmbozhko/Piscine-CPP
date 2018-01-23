/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 14:22:18 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/22 14:27:27 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1(void) : foo(42)
{
	std::cout << "Structure constructor is called" << std::endl;
	return ;
}

Sample1::~Sample1(void)
{
	std::cout << "Structure destructor is called" << std::endl;
	return ;
}

void		Sample1::bar(void) const
{
	std::cout << "this->foo in structure: " << this->foo << std::endl;
	return ;
}
