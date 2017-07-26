/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 18:34:36 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/14 19:40:59 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <list>

class	Span {

public:

	Span(void);
	Span(int const N);
	Span(Span const &src);
	~Span(void);

	void						addNumber(int const entry);
	int							shortestSpan(void);
	int							longestSpan(void);

	int							getN(void);
	std::list<int>				getNums(void);
	void						incStored(void);
	void						incIt(void);
	int							getStored(void);
	void						fillNums(void);

	Span						&operator=(Span const &rhs);

private:

	unsigned int				_N;
	unsigned int				_stored;
	std::list<int>				_nums;
	std::list<int>::iterator	_it;

};

#endif
