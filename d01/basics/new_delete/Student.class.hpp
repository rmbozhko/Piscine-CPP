/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 17:59:07 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/23 18:00:08 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_CLASS_HPP
# define STUDENT_CLASS_HPP

#include <string>

class	Student
{
	std::string		_name;
	static int		_nbInst;	
	
	public:
		Student(std::string);
		Student(void);
		~Student();

		std::string		getName(void) const;
		void			setName(std::string);

		int				getnbInst(void) const;
};

#endif
