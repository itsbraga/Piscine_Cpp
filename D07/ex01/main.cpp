/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 23:21:52 by art3mis           #+#    #+#             */
/*   Updated: 2025/06/16 00:30:07 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

/*
	----------------------------- [ Tools ] ------------------------------
*/
static void	__printInt( const int& n )
{
	std::cout << "Int: " << n << std::endl;
}

static void	__doubleInt( int& n )
{
	n *= 2;
}

static void	__printString( const std::string& str )
{
	std::cout << "str: " << str << std::endl;
}

static void	__strCapitalize( std::string& str )
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = std::toupper( str[i] );
}

int	main( void )
{
	std::cout << BOLD "\n-------[ Int tests ]-------\n" RESET << std::endl;

	int intArray[] = {1, 2, 4, 8, 16};
	std::cout << BOLD PP "[Original array]" RESET << std::endl;
	::iter( intArray, 5, __printInt );

	std::cout << BOLD PINK "\n[After doubling]" RESET << std::endl;
	::iter( intArray, 5, __doubleInt );
	::iter( intArray, 5, __printInt );

	std::cout << BOLD "\n------[ String tests ]------\n" RESET << std::endl;

	std::string strArray[] = {"Vivement", "la", "fin", "du", "cc"};
	std::cout << BOLD PP "[Original strings]" RESET << std::endl;
	::iter( strArray, 5, __printString );
	
	std::cout << BOLD PINK "\n[After uppercase]" RESET << std::endl;
	::iter( strArray, 5, __strCapitalize );
	::iter( strArray, 5, __printString );
	std::cout << std::endl;
	return (SUCCESS);
}
