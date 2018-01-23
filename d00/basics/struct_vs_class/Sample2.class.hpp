/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 14:09:50 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/22 14:26:45 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE2_CLASS_HPP
# define SAMPLE2_CLASS_HPP

class	Sample2
{
//	Difference between structure and class in C++ is in their default visibility scope.
//	By default, all member attributes and functions in structure are public, whilst in class if visibility scope is not specified all mem. attrs. and funct. belong to private scope.
	int		foo;
	public:
		Sample2(void);
		~Sample2(void);
	private:
		void		bar(void) const;
};
#endif
