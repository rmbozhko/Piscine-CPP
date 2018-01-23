/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 15:41:34 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/22 17:17:45 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class	Sample
{
	public:
		Sample(void);
		~Sample(void);
		// non member function
		static int		getnbInst(void);

	private:
		// non member attribute
		static int		_nbInst;

	// How do I know it? It because of, 'static' keyword.
	// Both non mem. attr. and funct. can be accessed only within the class
	// Sample::_nbInst || Sample::getnbInst()
};

#endif
