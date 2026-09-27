/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 10:01:20 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/09/26 10:12:01 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

template <typename T>
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T> // También valdría: template <class T> //
const T& min(const T& a, const T& b)
{
	if (a < b)
		return (a);
	return (b); // Incluye el caso de igualdad, en el que se devuelve el segundo argumento
}

template <typename T>
const T& max(const T& a, const T& b)
{
	if (a > b)
		return (a);
	return (b); // Incluye el caso de igualdad, en el que se devuelve el segundo argumento
}

#endif