/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 13:29:05 by knomura           #+#    #+#             */
/*   Updated: 2026/07/15 17:32:03 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon *_buki;

public:
	HumanB(const std::string& name);
	~HumanB();
	void attack();
	void setWeapon(Weapon& buki);
};

#endif