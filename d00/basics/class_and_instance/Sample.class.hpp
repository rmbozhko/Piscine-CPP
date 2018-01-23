/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:12:05 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/15 16:47:12 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

#include <iostream>

// It's just a model

class Sample {

	public:
		// Constructors and destructors in C++ don't have any return type, they are producers

		// constructor, to make constructor we need to define function with same name as class
		// when class instance is created the function below is called
		Sample(void);
		// destructor, to make destructor we need to define function with same name as class, with 1-st char -> '~'(tilda)
		~Sample(void);

		int		HelloWorld(void); // member function
		int		foo; // member attribute
};

#endif
