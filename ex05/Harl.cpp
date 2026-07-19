/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 16:21:34 by knomura           #+#    #+#             */
/*   Updated: 2026/07/18 17:04:18 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

#define DEBUG_MSG "I love having extra bacon for my " \
	"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
#define INFO_MSG "I cannot believe adding extra bacon costs more money. " \
	"You didn't put enough bacon in my burger! " \
	"If you did, I wouldn't be asking for more!"
#define WARNING_MSG "I think I deserve to have some extra bacon for free. " \
	"I've been coming for years, whereas you started working here " \
	"just last month."
#define ERROR_MSG "This is unacceptable! " \
	"I want to speak to the manager now."

Harl::Harl() {}
Harl::~Harl() {}

void Harl::complain(std::string level)
{
	(void)level;
}

void Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << DEBUG_MSG << std::endl;
}

void Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << INFO_MSG << std::endl;
}

void Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << WARNING_MSG << std::endl;
}

void Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << ERROR_MSG << std::endl;
}
