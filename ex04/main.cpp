/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 17:38:21 by knomura           #+#    #+#             */
/*   Updated: 2026/07/18 15:16:05 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char *av[])
{
	if (ac != 4 || av[2][0] == '\0')
		return 1;

	std::string newFileName = std::string(av[1]) + ".replace";
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::ifstream inputFile(av[1]);
	if (!inputFile)
	{
		std::cerr << "cannot open file\n";
		return 1;
	}
	std::ofstream outputFile(newFileName.c_str());
	if (!outputFile)
	{
		std::cerr << "no access to file\n";
		return 1;
	}
	std::string line;
	while (std::getline(inputFile, line))
	{
		std::string::size_type pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.size());
			line.insert(pos, s2);
			pos += s2.size();
		}
		outputFile << line;
		if (!inputFile.eof())
			outputFile << std::endl;
	}
	return 0;
}