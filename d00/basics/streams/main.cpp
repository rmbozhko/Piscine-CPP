/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 14:54:51 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/15 15:07:51 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	char		buff[512];

	// std:: is a namespace, whereas endl referes to the object that display carrige return depending on OS
	// and flushes out output cache buffer, besides carrige return in UNIX -> \\n, in MS-DOS -> \r\\n
	std::cout << "Hello, World!" << std::endl;

	std::cout << "Please, enter the word: ";
	std::cin >> buff;
	std::cout << "Entered word: " << buff << std::endl;
	std::cin.get();
	std::cout << "Please, enter the word: ";
	std::cin.getline(buff, sizeof buff);
	std::cout << "Entered word: " << buff << std::endl;
	return (0);
}
