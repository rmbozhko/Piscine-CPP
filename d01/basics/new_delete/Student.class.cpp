/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 18:00:29 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/23 18:03:33 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.class.hpp"
#include <iostream>

int		Student::_nbInst = 0;

Student::~Student(void)
{
	std::cout << "Destructor is called" << std::endl;
	Student::_nbInst--;
	return ;
}

Student::Student(std::string user_name) : _name(user_name)
{
	std::cout << "Constructor is called" << std::endl;
	this->getName();
	Student::getnbInst();
	Student::_nbInst++;
	return ;
}

Student::Student(void) : _name("undefined")
{
	std::cout << "Constructor is called" << std::endl;
	Student::getnbInst();
	Student::_nbInst++;
	return ;
}

std::string			Student::getName(void) const
{
	return (this->_name);
}

void				Student::setName(std::string new_name)
{
	if (new_name.size() > 0)
		this->_name = new_name;
	else
		std::cout << "It can't be a student's name." << std::endl;
}

int			Student::getnbInst(void) const
{
	return (Student::_nbInst);
}
