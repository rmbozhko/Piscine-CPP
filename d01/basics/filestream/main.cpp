/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 19:20:50 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/23 19:33:12 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int			main(void)
{
	// ifstream -> input file stream
	std::ifstream		ifs("numbers");
	unsigned int		dst;
	unsigned int		dst2;

	// Checking whether stream is created correctly
	if (ifs.is_open())
	{
		// Getting data from input stream
		ifs >> dst >> dst2;
		std::cout << dst << " " << dst2 << std::endl;
		// Closing the stream
		ifs.close();
	}

	// ofstream -> output file stream
	std::ofstream		ofs("test.out");

	// Checking whether stream is created correctly
	if (ofs.is_open())
	{
		// Pushing data to output stream
		ofs << "I like ponies a whole damn lot" << std::endl;
		// Closing the stream
		ofs.close();
	}

	return (0);
}
