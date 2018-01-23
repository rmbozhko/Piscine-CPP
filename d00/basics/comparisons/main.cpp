/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 15:08:20 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/22 15:23:52 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

void		ft_check(Sample &instance1, Sample &instance2)
{
	// addresses comparisons	
	if (&instance1 == &instance1)
		std::cout << "Phisically equal." << std::endl;
	else
		std::cout << "Not equal!" << std::endl;

	// addresses comparisons	
	if (&instance1 == &instance2)
		std::cout << "Phisically equal." << std::endl;
	else
		std::cout << "Not equal!" << std::endl;

	// _foo values comparison
	if ((instance1.compare(&instance1)) == 0)
		std::cout << "Structurally equal." << std::endl;
	else
		std::cout << "Not equal!" << std::endl;

	if ((instance1.compare(&instance2)) == 0)
		std::cout << "Structurally equal." << std::endl;
	else
		std::cout << "Not equal!" << std::endl;
}

int		main(void)
{
	Sample		instance1(42);
	Sample		instance2(42);

	ft_check(instance1, instance2);
	instance1.setFoo(25);
	instance2.setFoo(12);
	ft_check(instance1, instance2);
	return (0);
}
