/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-19 14:20:42 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-19 14:20:42 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
	return;
}

Zombie::~Zombie(void){
	std::cout << this->name << " is destroyed !" << std::endl;
	return;
}

void	Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

void	Zombie::setName(std::string name){
	this->name = name;
}