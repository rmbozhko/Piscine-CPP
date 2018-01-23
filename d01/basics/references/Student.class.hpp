/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 18:41:18 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/23 18:48:50 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_CLASS_HPP
# define STUDENT_CLASS_HPP

#include <string>

class	Student
{
	private:
		std::string		_login;
	
	public:
		Student(std::string const &login);
		~Student();
		std::string&		getLoginRef(void);
		std::string const&	getLoginRefConst(void) const;
		std::string*		getLoginPtr(void);
		std::string const*	getLoginPtrConst(void) const;
};

#endif
