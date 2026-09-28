/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 11:45:16 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/09/27 12:45:21 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <cstddef> // para size_t
#include <iostream>

template <typename T, typename F>
void iter(T* array, const std::size_t len, F function)
{
	for (std::size_t i = 0; i < len; i++)
		function(array[i]);
}

template <typename T>
void printPlusOne(T& value)
{
	std::cout << value + 1 << std::endl;
}

#endif