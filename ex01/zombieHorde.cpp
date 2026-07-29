/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 15:48:33 by knomura           #+#    #+#             */
/*   Updated: 2026/07/29 19:09:19 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, const std::string &name)
{
	if (n <= 0)
		return NULL;
	Zombie *p = new Zombie[n];

	for (int i = 0; i < n; i++)
		p[i].set_name(name);
	return p;
}