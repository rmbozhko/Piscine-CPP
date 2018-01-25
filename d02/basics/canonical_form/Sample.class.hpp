/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 20:13:25 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/25 20:17:44 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

#include <iostream>

class	Sample
{
	private:
		int		_foo;
	
	public:
		Sample(void); // default constructor
		Sample(const int);
		// copy constructor, a constructor which takes another class
		// and returns its copy to be used somewhere else
		Sample(const Sample&);
		~Sample(void);

		Sample&		operator=(const Sample&);

		int			getFoo(void) const;
		void		setFoo(int);

};

std::ostream&		operator<<(std::ostream&, const Sample&);

#endif
