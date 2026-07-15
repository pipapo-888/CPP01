/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 19:23:43 by knomura           #+#    #+#             */
/*   Updated: 2026/07/15 13:09:01 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *p = &str;
	std::string &ref = str;

	std::cout << &str << std::endl
			  << p << std::endl
			  << &ref << std::endl;
			  
	std::cout << str << std::endl
			  << *p << std::endl
			  << ref << std::endl;
}