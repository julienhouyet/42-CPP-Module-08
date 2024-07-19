/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:59:17 by jhouyet           #+#    #+#             */
/*   Updated: 2024/07/19 10:29:59 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANSTACK_HPP__
#define __MUTANSTACK_HPP__

#include <stack>

// ************************************************************************** //
//                              Mutanstack Class                              //
// ************************************************************************** //

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void);
	MutantStack(const MutantStack &copy);
	MutantStack &operator=(const MutantStack &copy);
	~MutantStack(void);

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin(void);
	iterator end(void);
	const_iterator begin(void) const;
	const_iterator end(void) const;
	reverse_iterator rbegin(void);
	reverse_iterator rend(void);
	const_reverse_iterator rbegin(void) const;
	const_reverse_iterator rend(void) const;
};

#include "../src/MutantStack.tpp"

#endif
