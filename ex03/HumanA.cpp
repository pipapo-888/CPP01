/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 15:50:35 by knomura           #+#    #+#             */
/*   Updated: 2026/07/15 17:32:17 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, Weapon& buki) : _name(name), _buki(buki)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _buki.getType() << std::endl;
}