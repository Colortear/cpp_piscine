/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 17:32:47 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/11 17:57:35 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{

	try {
		Bureaucrat		my_boy("the boy", 151);
		Bureaucrat		lil_boy("lil boy", 1);

		lil_boy.incGrade();
		lil_boy.incGrade();

		std::cout << lil_boy << std::endl;
		std::cout << my_boy << std::endl;

	}
	catch (Bureaucrat::GradeTooHighException &e) {

		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {

		std::cout << e.what() << std::endl;
	}
	return (0);
}
