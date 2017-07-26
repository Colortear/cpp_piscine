/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:33:08 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/05 21:52:22 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.class.hpp"

Fixed::Fixed(float const f) {

	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf((int)(f * 2048.24f / (float)this->_fixedBits)));
}

Fixed::Fixed(int const i) {

	std::cout << "Int contructor called" << std::endl;
	this->setRawBits(roundf((int)((float)i * 2048.24f / (float)this->_fixedBits)));
}

Fixed::Fixed(void) : _rawBits(0) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

float	Fixed::toFloat(void) const {

	return ((float)(this->_rawBits * (float)this->_fixedBits / 2048.24f));
}

int		Fixed::toInt(void) const {

	return (roundf((float)(this->_rawBits * (float)this->_fixedBits / 2048.24f)));
}
int		Fixed::getRawBits(void) const {

	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw) {

	this->_rawBits = raw;

	return ;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs) {

	o << rhs.toFloat();
	return o;
}

Fixed	&Fixed::operator=(Fixed const &rhs) {

	std::cout << "Assignation operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return (*this);
}
