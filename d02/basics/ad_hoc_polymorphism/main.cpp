/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 18:46:11 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/25 18:53:20 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int		main(void)
{
	Sample		temp;
	Sample		instance;

	instance.bar('a');
	instance.bar(42);
	instance.bar(3.14F);
	instance.bar(instance);
	temp.bar(instance);
	return (0);
}

