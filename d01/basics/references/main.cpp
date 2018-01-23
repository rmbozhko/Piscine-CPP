/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 18:15:13 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/23 19:19:58 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Student.class.hpp"

void		byPtr(std::string *str)
{
	*str += " and ponies";
}

void		byConstPtr(std::string const *str)
{
	std::cout << *str << std::endl;
}

void		byRef(std::string &str)
{
	str += " and ponies";
}

void		byConstRef(std::string const &str)
{
	std::cout << str << std::endl;
}

int			main(void)
{
	// Part 1 for local variables
	int		numberOfBalls = 42;

	int		*ballsPtr = &numberOfBalls;
	int		&ballsRef = numberOfBalls;
	//int		&badRef; // very bad, as you cannot assign it nowhere no more

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;
	std::cout << &numberOfBalls << " " << &ballsPtr << " " << &ballsRef << std::endl;
	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;
	ballsRef = 84;
	std::cout << numberOfBalls << std::endl;

	// Part 2 for function params
	std::string		str = "I like butterflies";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "I like otters";
	
	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);

	return (0);
}
