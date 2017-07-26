/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 21:22:32 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/11 17:43:30 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class	Bureaucrat {

public:

	Bureaucrat(void);
	Bureaucrat(std::string const name, int const grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat(void);

	Bureaucrat	&operator=(Bureaucrat const &rhs);

	struct	GradeTooHighException : public std::exception {

		virtual char const *what() const throw();
	};

	struct	GradeTooLowException : public std::exception {

		virtual char const *what() const throw();
	};

	std::string	getName(void) const;
	int			getGrade(void) const;
	void		incGrade(void);
	void		decGrade(void);

private:

	int 				_grade;
	std::string	const	_name;

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &i);

#endif
