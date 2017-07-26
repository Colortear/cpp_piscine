/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdebs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:09:26 by wdebs             #+#    #+#             */
/*   Updated: 2017/07/14 18:18:30 by wdebs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <list>
# include <vector>
# include <iostream>

template	<class T>
typename T::iterator	easyfind(T &container, int key) {

	typename	T::iterator	it;

	it = find(container.begin(), container.end(), key);
	if (it == container.end())
		throw(std::exception());
	return (it);
}

#endif
