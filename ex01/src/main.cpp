/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:05:11 by jhouyet           #+#    #+#             */
/*   Updated: 2024/07/18 17:19:38 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>

int main()
{

	srand(time(nullptr));

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

		sp.addNumber(2);
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

	try
	{
		Span sp4 = Span(10000);

		std::cout << "----------------------" << std::endl;
		std::cout << "Fourth try :" << std::endl;
		std::cout << "----------------------" << std::endl;

		std::vector<int> preArray(10000);
		for (size_t i = 0; i < 10000; i++)
		{
			preArray[i] = rand() % 9999999999;
		}

		sp4.addNumber(preArray.begin(), preArray.end());

		std::cout << "Shortest : " << sp4.shortestSpan() << std::endl;

		std::cout << "Longest : " << sp4.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}