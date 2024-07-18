/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:05:11 by jhouyet           #+#    #+#             */
/*   Updated: 2024/07/18 10:17:42 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>

int main()
{

	try
	{
		Span sp = Span(5);

		std::cout << "----------------------" << std::endl;
		std::cout << "First try :" << std::endl;
		std::cout << "----------------------" << std::endl;

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest : " << sp.shortestSpan() << std::endl;

		std::cout << "Longest : " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Span sp = Span(5);

		std::cout << "----------------------" << std::endl;
		std::cout << "Second try :" << std::endl;
		std::cout << "----------------------" << std::endl;

		srand(time(nullptr));

		sp.addNumber(rand() % 9999999999);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(15);
		sp.addNumber(15);
		sp.addNumber(15);
		sp.addNumber(15);
		sp.addNumber(15);

		std::cout << "Shortest : " << sp.shortestSpan() << std::endl;

		std::cout << "Longest : " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Span sp = Span(10000);

		std::cout << "----------------------" << std::endl;
		std::cout << "Third try :" << std::endl;
		std::cout << "----------------------" << std::endl;

		srand(time(nullptr));

		for (size_t i = 0; i < 10000; i++)
		{
			sp.addNumber(rand() % 9999999999);
		}

		std::cout << "Shortest : " << sp.shortestSpan() << std::endl;

		std::cout << "Longest : " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}