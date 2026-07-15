/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 15:14:40 by knomura           #+#    #+#             */
/*   Updated: 2026/07/15 17:31:53 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : _type(type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const
{
	return _type;
}

void Weapon::setType(const std::string& type)
{
	_type = type;
}