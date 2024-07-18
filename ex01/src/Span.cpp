/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:04:47 by jhouyet           #+#    #+#             */
/*   Updated: 2024/07/18 09:50:51 by jhouyet          ###   ########.fr       */
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
	return 0;
}

int Span::longestSpan(void) const
{
	return 0;
}
