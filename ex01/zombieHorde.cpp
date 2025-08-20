/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-20 11:25:32 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-20 11:25:32 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie*	horde = new Zombie[N];

	for (int i = 0 ; i < N ; i++)
		horde[i].setName(name);
	return (horde);
}