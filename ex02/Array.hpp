/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 13:48:32 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/09/28 21:15:55 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
	private:
		T *array_;
		unsigned int size_;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		~Array();
		Array& operator=(const Array& other);
		T& operator[](unsigned int n);
		const T& operator[](unsigned int n) const;
		unsigned int size() const;
		class InvalidIndexException : public std::exception
		{
			virtual const char *what() const throw();
		};
};

#include "Array.tpp"

#endif
