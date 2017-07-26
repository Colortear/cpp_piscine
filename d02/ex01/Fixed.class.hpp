/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:32:58 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/05 20:24:51 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class	Fixed {

public:

	Fixed(void);
	Fixed(int const i);
	Fixed(float const f);
	Fixed(Fixed const &src);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	Fixed	&operator=(Fixed const &rhs);


private:

	int					_rawBits;
	static int const	_fixedBits = 8;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &i);

#endif
