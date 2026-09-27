/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:05:24 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/09/27 18:51:39 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <exception>

template <typename T>
Array<T>::Array() : array_(NULL), size_(0) {}

template <typename T>
Array<T>::Array(unsigned int n)
{
	array_ = new T[n]();
	size_ = n;
}

template <typename T>
Array<T>::Array(const Array& other)
{
	size_ = other.size_;
	if (size_ == 0)
		array_ = NULL;
	else
	{	
		array_ = new T[size_];
		for (unsigned int i = 0; i < size_; i++)
			array_[i] = other.array_[i]
	}
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	delete[] array_;
	size_ = other.size_;
	if (size_ == 0)
		array_ = NULL;
	else
	{	
		array_ = new T[size_];
		for (unsigned int i = 0; i < size_; i++)
			array_[i] = other.array_[i]
	}
}

template <typename T>
Array<T>::~Array()
{
	if (size_ > 0)
		delete[] array;
}

template <typename T>
T& Array<T>::operator[](unsigned int n)
{
	if (n >= size_)
		std::exception::what("Invalid index");
	return (array_[n]);
}

template <typename T>
unsigned int Array<T>::size(void)
{
	return (size_);
}


#endif