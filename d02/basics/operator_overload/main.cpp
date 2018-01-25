/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 20:02:28 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/25 20:07:49 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"
#include <fstream>

int		main(void)
{
	Integer		i(42);
	Integer		a(25);
	Integer 	r = i + a;

	std::cout << r;
	std::cout << i;
	std::cout << a;

	std::ofstream		ofs("test.out");

	if (ofs.is_open())
	{
		ofs << r;
		ofs << i;
		ofs << a;
		ofs.close();
	}
	else
		return (EXIT_FAILURE);
	return (0);
}
