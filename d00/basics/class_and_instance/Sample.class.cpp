/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:13:13 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/15 15:40:30 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

// It's just a model's definition

// as far as we include Sample class above, we add Sample class namespace into out code,
// so to access its members we need to use -> class_name::member_to_access
// we don't have any return types for constructor and destructor
Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	// but it is good to show when you make code to stop working
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	// there will be no error if we omit 'return' statement
	//return ;
}

// here I specify the return value as in .hpp file,
// mark Sample class namespace usage and denote the function I want to define
int		Sample::HelloWorld(void)
{
	std::cout << "Hello, World!" << std::endl;
	return (42);
}
