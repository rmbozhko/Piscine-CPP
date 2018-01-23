/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 17:41:56 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/15 18:03:19 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"

// Use an initialization list over the following messup in future 
Sample1::Sample1(char p1, int p2, float p3)
{
	std::cout << "Constructor called" << std::endl;

	this->a1 = p1;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	
	this->a2 = p2;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	
	this->a3 = p3;
	std::cout << "this->a3 = " << this->a3 << std::endl;

	return ;
}

Sample1::~Sample1(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
