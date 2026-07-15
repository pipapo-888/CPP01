/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 13:30:13 by knomura           #+#    #+#             */
/*   Updated: 2026/07/15 17:31:42 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string _type;

public:
	Weapon(const std::string& type);
	~Weapon();

	const std::string& getType() const;
	void setType(const std::string& type);
};

#endif