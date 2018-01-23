/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:13:13 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/15 17:35:17 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	// this is a pointer to the current instance
	this->foo = 42; // same as self in Python, pointer to the current instance of class
	std::cout << "this->foo: " << this->bar() << std::endl;
	this->HelloWorld();
	
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	
	return ;
}

int		Sample::HelloWorld(void)
{
	std::cout << "Hello, World! from member function :)" << std::endl;
	
	return (42);
}

int		Sample::bar(void)
{
	return (this->foo); // this will return foo variable value of calling class
}

void	Sample::smth(Sample temp) 
{
	this->HelloWorld();
	temp.HelloWorld();

	return ;
}
