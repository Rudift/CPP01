/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-20 12:45:04 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-20 12:45:04 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : type(type){
	return;
}

Weapon::~Weapon(void){
	return;
}

std::string const& Weapon::getType(void) const{
	std::string const&	typeREF =  this->type;
	return (typeREF);
}

void	Weapon::setType(std::string type){
	this->type = type;
}
