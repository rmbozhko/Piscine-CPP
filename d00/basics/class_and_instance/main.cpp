/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:08:45 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/15 17:06:51 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

void	ft_show_smth(Sample *temp)
{
	// calling member function
	temp->foo = 12;
	std::cout << "Calling class function using pointer: " << temp->HelloWorld() << std::endl;
}

void	ft_show_smth(Sample &temp)
{
	// calling member function
	temp.foo = 25;
	std::cout << "Calling class function using reference: " << temp.HelloWorld() << std::endl;
}

// plain Sample class instance - copy
void	ft_show_and_mod_smth(Sample temp)
{
	// modifing local instance of Sample class
	temp.foo = 1024;
	// calling member function
	std::cout << "Calling class function using reference: " << temp.HelloWorld() << std::endl;
	// Showing the value of variable of local instance 
	std::cout << "Sample class member attribute: " << temp.foo << std::endl;
	// When we reach the end of this function, where instance of Sample is located,
	// destructor:~Sample() is automatically called
}

int		main(void)
{
	// It's a model's instance usage, we can produce as many instances as we want
	// When instance of a class is created a constructor is automatically is called
	Sample		instance;

	std::cout << "The HelloWorld function: " << instance.HelloWorld() << std::endl;
	ft_show_smth(&instance);
	ft_show_smth(instance);
	// we pass here the instance variable, since the paramater of 'ft_show_and_mod_smth' function is a plain variable, 
	// and got a copy of instance variable in that function and var's destructor will be called 
	// as soon as function ends its execution
	ft_show_and_mod_smth(instance);
	std::cout << "Sample class member attribute: " << instance.foo << std::endl;
	// When we reach the end of any block, where some local instances of any class are located,
	// destructor(~ClassName) is automatically called
	return (0);
}
