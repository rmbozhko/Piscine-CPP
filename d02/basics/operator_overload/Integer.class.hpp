/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 19:07:39 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/25 20:04:17 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_HPP
# define INTEGER_CLASS_HPP

#include <iostream>

class	Integer
{
	private:
		int		_value;

	public:
		Integer(const int);
		~Integer(void);
		
		int			getValue(void) const;

		Integer&	operator=(const Integer&);
		Integer		operator+(const Integer&) const;
};

std::ostream&		operator<<(std::ostream&, const Integer&);

#endif
