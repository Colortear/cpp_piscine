/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:32:58 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/05 18:58:46 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class	Fixed {

public:

	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	Fixed	&operator=(Fixed const &rhs);

private:

	int					_rawBits;
	static int const	_fixedBits = 8;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &i);

#endif
