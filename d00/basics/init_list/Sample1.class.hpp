/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 17:38:27 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/15 17:41:03 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_CLASS_HPP
# define SAMPLE1_CLASS_HPP

class	Sample1
{
	public:
		char		a1;
		int			a2;
		float		a3;

		// constructor is expecting 3 parameters(char, int. float)
		Sample1(char p1, int p2, float p3);
		~Sample1(void);
};

#endif
