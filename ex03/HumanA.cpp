/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-20 12:43:02 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-20 12:43:02 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& arme) : name(name), arme(arme){
	return;
}

HumanA::~HumanA(void){
	return;
}

void	HumanA::attack(void){
	std::cout << this->name << " attacks with their " << this->arme.getType() << std::endl;
}