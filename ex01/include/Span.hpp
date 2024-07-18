/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:04:50 by jhouyet           #+#    #+#             */
/*   Updated: 2024/07/18 17:16:37 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <vector>

// ************************************************************************** //
//                              Span Class                                    //
// ************************************************************************** //

class Span
{
public:
	Span();
	Span(unsigned int n);
	Span(const Span &copy);
	Span &operator=(const Span &copy);
	~Span(void);

	void addNumber(unsigned long number);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan(void) const;
	int longestSpan(void) const;

private:
	unsigned int _n;
	std::vector<int> _array;
};

#endif