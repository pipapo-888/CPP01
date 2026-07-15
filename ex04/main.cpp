/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 17:38:21 by knomura           #+#    #+#             */
/*   Updated: 2026/07/15 19:05:46 by knomura          ###   ########.fr       */
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
	std::string line;
	int pos = 0;
	while(std::getline(file, line))
	{
		while ((pos = line.find(s1)) != std::string::npos)
		{
			line.erase(pos, s1.size());
			line.insert(pos, s2);
		}
		std::cout << line << std::endl;
	}
	return 0;
}