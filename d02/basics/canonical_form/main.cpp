/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 20:36:18 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/25 21:03:06 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int			main(void)
{
	Sample		instance1;
	Sample		instance2(42);
	Sample		instance3(instance1);

	std::cout << instance1;
	std::cout << instance2;
	std::cout << instance3;

	instance3 = instance2;
	std::cout << instance3;

	return (0);
}
