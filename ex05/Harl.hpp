/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knomura <knomura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 16:12:43 by knomura           #+#    #+#             */
/*   Updated: 2026/07/18 17:00:53 by knomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl{
	private:
		void debug();		
		void info();		
		void warning();		
		void error();		

	public:
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif