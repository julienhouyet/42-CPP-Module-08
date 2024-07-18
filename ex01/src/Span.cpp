/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:04:47 by jhouyet           #+#    #+#             */
/*   Updated: 2024/07/18 15:08:41 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>

Span::Span() : _n(0)
{
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span &Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		this->_n = copy._n;
		this->_array = copy._array;
	}
	return (*this);
}

Span::~Span(void)
{
}

// ************************************************************************** //
//                         Public Member Functions                            //
// ************************************************************************** //

void Span::addNumber(unsigned long number)
{
	if (this->_array.size() < this->_n)
	{
		this->_array.push_back(number);
	}
	else
	{
		throw std::out_of_range("No more place in the array");
	}
}

int Span::shortestSpan(void) const
{
	if (this->_array.size() < 2)
	{
		throw std::logic_error("Need more elements for found the shortest span");
	}

	int shortestSpan = INT_MAX;

	std::vector<int> tempArray = this->_array;
	std::sort(tempArray.begin(), tempArray.end());

	for (size_t i = 1; i < tempArray.size(); ++i)
	{
		int span = tempArray[i] - tempArray[i - 1];
		if (span < shortestSpan)
		{
			shortestSpan = span;
		}
	}

	return shortestSpan;
}

int Span::longestSpan(void) const
{
	if (this->_array.size() < 2)
	{
		throw std::logic_error("Need more elements for found the longest span");
	}

	int min = *std::min_element(this->_array.begin(), this->_array.end());
	int max = *std::max_element(this->_array.begin(), this->_array.end());

	return max - min;
}
