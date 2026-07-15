/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 17:38:21 by knomura           #+#    #+#             */
/*   Updated: 2026/07/15 19:28:06 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char *av[])
{
	if (ac != 4)
		return 0;

	std::ifstream file(av[1]);
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (!file)
	{
		std::cout << "No file\n";
		return 0;
	}
	std::string outputFile = std::string(av[1]) + ".replace";
	std::ofstream newfile(outputFile.c_str());
	std::string line;
	std::string::size_type pos = 0;
	while(std::getline(file, line))
	{
		while ((pos = line.find(s1)) != std::string::npos)
		{
			line.erase(pos, s1.size());
			line.insert(pos, s2);
		}
		newfile << line << std::endl;
	}
	return 0;
}