/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 15:50:55 by knomura           #+#    #+#             */
/*   Updated: 2026/07/15 17:32:23 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name) : _name(name), _buki(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << _name << " attacks with their " << _buki->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &buki)
{
	_buki = &buki;
}