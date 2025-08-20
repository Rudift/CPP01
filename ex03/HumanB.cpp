/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-20 12:43:08 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-20 12:43:08 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), arme(NULL){
	return;
}

HumanB::~HumanB(void){
	return;
}

void	HumanB::attack(void){
	if(this->arme)
		std::cout << this->name << " attacks with their " << this->arme->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their bare hands" << std::endl;
}

void	HumanB::setWeapon(Weapon &wep){
	this->arme = &wep;
}