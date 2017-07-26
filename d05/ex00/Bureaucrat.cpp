/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 17:03:12 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/11 17:49:09 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::Bureaucrat(std::string const name, int const grade) : _name(name) {

	Bureaucrat::GradeTooHighException	too_high;
	Bureaucrat::GradeTooLowException	too_low;

	if (grade < 1)
		throw(too_low);
	else if (grade > 150)
		throw(too_high);
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {

	*this = src;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat		&Bureaucrat::operator=(Bureaucrat const &rhs) {

	this->_grade = getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i) {

	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}

std::string		Bureaucrat::getName(void) const {

	return (this->_name);
}

int				Bureaucrat::getGrade(void) const {

	return (this->_grade);
}

void			Bureaucrat::incGrade(void) {

	Bureaucrat::GradeTooLowException	too_low;

	if (this->_grade - 1 < 1)
		throw(too_low);
	else
		this->_grade--;
}

void			Bureaucrat::decGrade(void) {
	
	Bureaucrat::GradeTooHighException	too_high;

	if (this->_grade + 1 > 150)
		throw(too_high);
	else
		this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {

	return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {

	return ("Grade is too low");
}
