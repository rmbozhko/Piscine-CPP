/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:28:02 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/23 16:18:30 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

// not assigning the 'f' value to 'pi' attr., but initializing 'pi' attr. to 'f' value
// maybe, we can assign value to plain variable many times whilst only once to const
// the first attr. is set using passed param. and the second using numeric constant, means that each instance of Sample class will have 42 as qd value after constructor execution 
// it's an only way to initialize const mem. attrb. in class. Why? Look below
Sample::Sample(float const f) : pi(f), qd(42)
{
	// we cannot assign value to const mem. attribute like this
	// that is why we initialize pi with f value in init_list
	//this->pi = 4.14;
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void		Sample::bar(void) const
{
	//this->qd = 12;
	std::cout << "this->pi: " << this->pi << std::endl;
	std::cout << "this->qd: " << this->qd << std::endl;
	return ;
}

void		Sample::show(void) const
{
	//this->qd = 12;
	std::cout << "this->pi: " << this->pi << std::endl;
	std::cout << "this->qd: " << this->qd << std::endl;
	return ;
}
