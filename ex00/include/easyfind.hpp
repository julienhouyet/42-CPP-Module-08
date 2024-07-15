/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:41:06 by jhouyet           #+#    #+#             */
/*   Updated: 2024/07/15 10:02:33 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iterator>
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &array, int value)
{
	typename T::iterator it = std::find(array.begin(), array.end(), value);
	if (it == array.end())
	{
		throw std::runtime_error("Value not found");
	}
	return it;
}

#endif