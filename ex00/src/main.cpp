/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:41:02 by jhouyet           #+#    #+#             */
/*   Updated: 2024/07/15 10:03:23 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <iostream>
#include <vector>

int main()
{
	int values[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	std::vector<int> array;

	array.assign(values, values + sizeof(values) / sizeof(values[0]));

	try
	{
		std::vector<int>::iterator it = easyfind(array, 9);
		std::cout << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::vector<int>::iterator it = easyfind(array, 20);
		std::cout << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}