/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 18:39:41 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/14 19:59:57 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(int const N = 0) : _N(N), _stored(0) {

	_nums(N, 0);
	_it = _nums.begin();
}

Span::Span(Span const &src) {*this = src;}

Span::~Span(void) {}

void						Span::addNumber(int const entry) {

	if (_stored == N)
		throw(std::exception());
	incStored();
	for (int i = 0; i < getStored(); i++)
		incIt();
	*_it = entry;
	_it = getNums().begin();
}

unsigned int				Span::shortestSpan(void) {

	int		shortest_diff = 
	for (int i = 0; i < getStored(); i++)


}

unsigned int				Span::longestSpan(void) {

}

unsigned int				Span::getN(void) {return (_N);}

std::list<int>				Span::getNums(void) {return (_nums);}

std::list<int>::iterator	Span::getIt(void) {return (_it);}

void						Span::incStored(void) {_stored++;}

void						Span::incIt(void) {_it++;}

unsigned int				Span::getStored(void) {return (_stored);}

void						Span::setStored(int const size) {_stored = size;}

void						Span::fillNums(void) {

	std::iota(getNums().begin(), getNums().end(), 0);
	setStored(N);
}

Span						&Span::operator=(Span const &rhs) {

	this->_N = rhs.getN();
	this->_stored = rhs.getStored();
	this->_nums = rhs.getNums();
	this->_it = rhs.getIt();
	return (*this);
}
