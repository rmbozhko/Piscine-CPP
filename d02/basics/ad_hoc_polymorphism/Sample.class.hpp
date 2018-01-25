/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 18:33:09 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/25 18:36:18 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class	Sample
{
	public:
		Sample(void);
		~Sample(void);

		// Function overloading also works with plain functions
		void		bar(const char) const;
		void		bar(const int) const;
		void		bar(const float) const;
		void		bar(const Sample&) const;

};

#endif
