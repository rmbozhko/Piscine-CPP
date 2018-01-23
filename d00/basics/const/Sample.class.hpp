/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbozhko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:16:44 by rbozhko           #+#    #+#             */
/*   Updated: 2018/01/20 15:01:56 by rbozhko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class	Sample
{
	public:
		float const		pi;// const float		pi;
		int				qd;

		Sample(float const f);// Sample(const float f);
		~Sample(void);

		void		bar(void) const;
		void		show(void) const;
};

#endif
