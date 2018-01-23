/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:24:59 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/20 14:57:58 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"
#include <cstdio>

int		main(void)
{
	const int a = 42;
	// same as the one above
	int const b = 12;
	// but different situation with pointers

	printf("a:%d|b:%d\n", a, b);
	Sample				instance(3.14);
	const Sample		temp(2.7);

	printf("INSTANCE PART\n");
	instance.bar();
	instance.show();
	printf("TEMP PART\n");
	temp.bar();
	temp.show();
	return (0);
}
