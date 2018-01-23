/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:08:45 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/15 17:36:38 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int		main(void)
{
	Sample		instance;

	instance.foo = 1024;
	std::cout << "The HelloWorld function: " << instance.HelloWorld() << std::endl;
	std::cout << "Sample class member attribute: " << instance.foo << std::endl;
	instance.smth(instance);
	// When we reach the end of any block, where some local instances of any class are located,
	// destructor(~ClassName) is automatically called
	return (0);
}
