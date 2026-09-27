/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarro-d <ccarro-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 10:38:33 by ccarro-d          #+#    #+#             */
/*   Updated: 2026/09/26 11:36:29 by ccarro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"
#include <iostream>

int	main(void)
{
	{
		std::cout << "======= Template for INT =======" << std::endl;
		int a = 3;
		int b = 6;
		std::cout << "a = " << a << " & b = " << b << std::endl;
		std::cout << "min = " << ::min(a, b) << " & max = " << ::max(a, b) << std::endl;
		std::cout << "swap a & b" << std::endl;
		swap(a, b);
		std::cout << "a = " << a << " & b = " << b << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "======= Template for DOUBLE =======" << std::endl;
		double a = 2.45;
		double b = 7.49;
		std::cout << "a = " << a << " & b = " << b << std::endl;
		std::cout << "min = " << ::min(a, b) << " & max = " << ::max(a, b) << std::endl;
		std::cout << "swap a & b" << std::endl;
		swap(a, b);
		std::cout << "a = " << a << " & b = " << b << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "======= Template for CHAR =======" << std::endl;
		char a = 'a';
		char b = 'b';
		std::cout << "a = " << a << " & b = " << b << std::endl;
		std::cout << "min = " << ::min(a, b) << " & max = " << ::max(a, b) << std::endl;
		std::cout << "swap a & b" << std::endl;
		swap(a, b);
		std::cout << "a = " << a << " & b = " << b << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "======= Template for STRING =======" << std::endl;
		std::string a = "Hola";
		std::string b = "Adios";
		std::cout << "a = " << a << " & b = " << b << std::endl;
		std::cout << "min = " << ::min(a, b) << " & max = " << ::max(a, b) << std::endl;
		std::cout << "swap a & b" << std::endl;
		swap(a, b);
		std::cout << "a = " << a << " & b = " << b << std::endl;
	}
	return (0);
}