/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 17:39:25 by knomura           #+#    #+#             */
/*   Updated: 2026/07/15 13:35:20 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	Zombie(std::string name);
	void announce();
	void set_name(std::string name);
	~Zombie();
};

Zombie* zombieHorde(int n, std::string name);

#endif