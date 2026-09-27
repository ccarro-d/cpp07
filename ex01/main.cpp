/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 11:57:39 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/09/27 12:49:37 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"

void print (const int& n)
{
	std::cout << n << std::endl;
}

void increment(double& n)
{
    n++;
}

int main (void)
{
	const int numbers[] = {1, 2, 3};
	iter(numbers, 3, print);
	iter(numbers, 3, printPlusOne<const int>); // instanciamos explícitamente el function template para T = const int
	double otherNumbers[] = {7.0, 8.0, 9.0};
	iter(otherNumbers, 3, increment);
	iter(otherNumbers, 3, printPlusOne<double>); // instanciamos explícitamente el function template para T = double
	return (0);
}