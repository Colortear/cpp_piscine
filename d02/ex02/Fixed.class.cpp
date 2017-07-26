/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:33:08 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/06 00:28:45 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.class.hpp"

Fixed::Fixed(float const f) {

	std::cout << "Float constructor called" << std::endl;
	this->setRawBits((int)(f * 2048.24f / (float)this->_fixedBits));
}

Fixed::Fixed(int const i) {

	std::cout << "Int contructor called" << std::endl;
	this->setRawBits((int)((float)i * 2048.24f / (float)this->_fixedBits));
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

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b) {

	return (a._rawBits > b._rawBits ? a : b);
}

Fixed		&Fixed::max(Fixed &a, Fixed &b) {

	return (a._rawBits > b._rawBits ? a : b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b) {

	return (a._rawBits < b._rawBits ? a : b);
}

Fixed		&Fixed::min(Fixed &a, Fixed &b) {

	return (a._rawBits < b._rawBits ? a : b);
}

Fixed		&Fixed::operator++(void) {

	_rawBits++;
	return (*this);
}

Fixed		Fixed::operator++(int) {

	Fixed	temp = *this;
	++_rawBits;
	return (temp);
}

Fixed		&Fixed::operator--(void) {

	_rawBits--;
	return (*this);
}

Fixed		Fixed::operator--(int) {

	Fixed	temp = *this;
	--_rawBits;
	return (temp);
}

bool	Fixed::operator>(Fixed const &rhs) {

	return (_rawBits > rhs._rawBits);
}

bool	Fixed::operator<(Fixed const &rhs) {

	return (_rawBits < rhs._rawBits);
}

bool	Fixed::operator<=(Fixed const &rhs) {

	return (_rawBits <= rhs._rawBits);
}

bool	Fixed::operator>=(Fixed const &rhs) {

	return (_rawBits >= rhs._rawBits);
}

bool	Fixed::operator!=(Fixed const &rhs) {

	return (_rawBits != rhs._rawBits);
}

bool	Fixed::operator==(Fixed const &rhs) {

	return (_rawBits == rhs._rawBits);
}

int		Fixed::operator+(Fixed const &rhs) {

	return (_rawBits + rhs._rawBits);
}

int		Fixed::operator-(Fixed const &rhs) {

	return (_rawBits - rhs._rawBits);
}

int		Fixed::operator*(Fixed const &rhs) {

	return (_rawBits * rhs._rawBits);
}

int		Fixed::operator/(Fixed const &rhs) {

	return (_rawBits / rhs._rawBits);
}
