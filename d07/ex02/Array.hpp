/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:13:22 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/13 20:35:45 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template	<typename T>
class	Array {

private:

	T				*_arr;
	unsigned int	_size;

public:

	Array(void) : _size(0) {

		_arr = NULL;
		return ;
	}

	Array(unsigned int n) : _size(n) {

		_arr = new T[n];
		return ;
	}

	Array(Array const &src) {

		*this = src;
	}
	~Array(void) {

		if (this->_size > 0)
			delete [] _arr;
	}

	Array			&operator=(Array const &rhs) {

		if (_arr)
			delete [] this->_arr;
		this->_arr = new T[rhs._size];
		for (int i = 0; i < rhs._size; i++)
			this->_arr[i] = rhs._arr[i];
		return (*this);
	}

	T				&operator[](unsigned int i) const {

		if (i + 1 > this->_size)
			throw(std::exception());
		return (this->_arr[i]);
	}

	unsigned int	size(void) const {

		return (this->_size);
	}

};

#endif
