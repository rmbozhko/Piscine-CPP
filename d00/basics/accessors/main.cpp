/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 14:44:39 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/22 14:46:13 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int		main(void)
{
	Sample		instance;

	instance.getFoo();
	instance.setFoo(42);
	instance.getFoo();
	instance.setFoo(-42);
	instance.getFoo();
	return (0);
}
