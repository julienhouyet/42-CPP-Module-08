/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:05:11 by jhouyet           #+#    #+#             */
/*   Updated: 2024/07/17 09:34:07 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>

int main()
{

	std::cout << "Hello Span" << std::endl;

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(15);
	sp.addNumber(15);
	sp.addNumber(15);
	sp.addNumber(15);
	sp.addNumber(15);

	std::cout << sp.shortestSpan() << std::endl;

	std::cout << sp.longestSpan() << std::endl;

	return 0;
}