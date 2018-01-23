/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 14:32:18 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/22 14:44:35 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class	Sample
{
	public:
		Sample(void);
		~Sample(void);
		// Setters and getters are just a convention, 
		// which helps get an access to private member attributes.
		int			getFoo(void) const;
		void		setFoo(int);
	
	private:
		int		_foo;
};
#endif
