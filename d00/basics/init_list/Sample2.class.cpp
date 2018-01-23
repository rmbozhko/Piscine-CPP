/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 17:41:56 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/15 17:53:52 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

// Instead of using boring this->a1 = p1; this->a2 = p2; this->a3 = p3; we can use following syntax
Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) // initialization list syntax
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;	
	return ;
}

Sample2::~Sample2(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
