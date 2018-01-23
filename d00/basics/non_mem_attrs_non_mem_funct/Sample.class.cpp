/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 15:42:59 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/22 17:24:25 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

// code of this file will execute only once
// functions will be saved in memory
Sample::Sample(void)
{
	std::cout << "Constructor is called" << std::endl;
	Sample::_nbInst++;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor is called" << std::endl;
	Sample::_nbInst--;
	return ;
}

int		Sample::getnbInst(void)
{
	return (Sample::_nbInst);
}

// the following line will execute only once
int		Sample::_nbInst = 0;

