/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:39:24 by knomura           #+#    #+#             */
/*   Updated: 2026/08/08 16:42:29 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string fileName) : _isError(false) { checkOpenErrors(fileName); }

Sed::Sed(std::string fileName, std::string s1, std::string s2) : _isError(false)
{
	checkOpenErrors(fileName);
	if (!_isError)
		replace(s1, s2);
}

Sed::~Sed() {}

bool Sed::hasError() { return _isError; }

void Sed::checkOpenErrors(std::string fileName)
{
	_ifs.open(fileName.c_str());
	if (!_ifs)
	{
		std::cerr << "cannot open file\n";
		_isError = true;
		return;
	}
	_ofs.open((fileName + ".replace").c_str());
	if (!_ofs)
	{
		std::cerr << "no access to file\n";
		_isError = true;
	}
}

void Sed::replace(std::string s1, std::string s2)
{
	std::string line;
	while (std::getline(_ifs, line))
	{
		std::string::size_type pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.size());
			line.insert(pos, s2);
			pos += s2.size();
		}
		_ofs << line;
		if (!_ifs.eof())
			_ofs << std::endl;
	}
}