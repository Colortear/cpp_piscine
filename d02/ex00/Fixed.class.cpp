/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:33:08 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/05 19:10:45 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"


Fixed::Fixed(void) : _rawBits(0) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {

	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs) {

	std::cout << "Assignation operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;

	return ;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs) {

	o << rhs.getRawBits();
	return o;
}
