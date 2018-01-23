/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 14:07:19 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/22 14:21:54 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_CLASS_HPP
# define SAMPLE1_CLASS_HPP

struct	Sample1
{
//	Difference between structure and class in C++ is in their default visibility scope.
//	By default, all member attributes and functions in structure are public, whilst in class if visibility scope is not specified all mem. attrs. and funct. belong to private scope.
	int		foo;

	Sample1(void);
	~Sample1(void);

	void		bar(void) const;
};

#endif
