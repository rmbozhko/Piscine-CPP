/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 18:44:25 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/23 18:48:03 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.class.hpp"
#include <iostream>

Student::Student(std::string const& login) : _login(login)
{
	std::cout << "Constructor is called" << std::endl;
	return ;
} 

Student::~Student(void)
{
	std::cout << "Destructor is called" << std::endl;
	return ;
}

std::string&		getLoginRef(void)
{
	return (this->_login);
}

std::string const&	getLoginRefConst(void) const
{
	return (this->_login);
}

std::string*		getLoginPtr(void)
{
	return (&(this->_login));
}

std::string	const*	getLoginPtrConst(void) const
{
	return (&(this->_login));
}
