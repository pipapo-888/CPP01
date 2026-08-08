/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:39:27 by knomura           #+#    #+#             */
/*   Updated: 2026/08/08 16:44:45 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <iostream>
#include <fstream>

class Sed
{
private:
	bool _isError;
	std::ifstream _ifs;
	std::ofstream _ofs;

	void checkOpenErrors(std::string fileName);

public:
	Sed(std::string fileName);
	Sed(std::string fileName, std::string s1, std::string s2);
	~Sed();
	
	bool hasError();
	void replace(std::string s1, std::string s2);
};

#endif