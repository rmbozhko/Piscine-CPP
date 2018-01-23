/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 15:36:06 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/20 17:36:49 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class	Sample
{
	public:
		int		publicFoo;
		// just imagine if we place our constructor and destructor in private section
		// we couldn't create a single class instance, as we are asking of functions not availiable for using outside the class
		Sample(void);
		~Sample(void);
		void	publicBar(void) const;

	private: // only visible and usable from inside the class
	// '_' at the beginning shows that mem. attr. || funct. is private 
		int		_privateFoo;
		void	_privateBar(void) const;
};
#endif
