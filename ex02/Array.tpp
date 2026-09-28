/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:05:24 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/09/28 21:27:12 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array() : array_(NULL), size_(0) {}

template <typename T>
Array<T>::Array(unsigned int n)
{
	if (n == 0)
		array_ = NULL;
	else
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
			try
			{
				for (unsigned int i = 0; i < size_; i++)
					array_[i] = other.array_[i];
			}
			catch(...)
			{
				delete[] array_;
				throw;
			}
		}
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{	
		if (other.size_ == 0)
		{
			delete[] array_;
			array_ = NULL;
			size_ = 0;
			return (*this);
		}
		T* tmp = new T[other.size_]; // Si falla, hace throw de la excepción std::bad_alloc y no continua
		try
		{
			for (unsigned int i = 0; i < other.size_; i++)
					tmp[i] = other.array_[i]; // Si alguna iteración falla, hace throw
		}
		catch(...) // Porque T puede ser una clase cualquiera con cualquier tipo de excepción
		{
			delete[] tmp;
			throw;
		}
		delete[] array_;
		array_ = tmp;
		size_ = other.size_;
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] array_; // No hace falta comprobar size_ porque es seguro liberar un puntero nulo
}

template <typename T>
const char *Array<T>::InvalidIndexException::what() const throw()
{
	return ("Invalid Index");
}

template <typename T>
T& Array<T>::operator[](unsigned int n)
{
	if (n >= size_)
		throw InvalidIndexException();
	return (array_[n]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int n) const
{
	if (n >= size_)
		throw InvalidIndexException();
	return (array_[n]);
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return (size_);
}


#endif