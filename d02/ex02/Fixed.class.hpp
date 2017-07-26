/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:32:58 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/06 00:25:29 by wdebs            ###   ########.fr       */
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

	static const Fixed	&max(const Fixed &a, const Fixed &b);
	static Fixed			&max(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static Fixed			&min(Fixed &a, Fixed &b);

	Fixed	&operator=(Fixed const &rhs);
	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);
	bool	operator>(Fixed const &rhs);
	bool	operator<(Fixed const &rhs);
	bool	operator<=(Fixed const &rhs);
	bool	operator>=(Fixed const &rhs);
	bool	operator!=(Fixed const &rhs);
	bool	operator==(Fixed const &rhs);
	int		operator+(Fixed const &rhs);
	int		operator-(Fixed const &rhs);
	int		operator*(Fixed const &rhs);
	int		operator/(Fixed const &rhs);

private:

	int					_rawBits;
	static int const	_fixedBits = 8;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &i);

#endif
