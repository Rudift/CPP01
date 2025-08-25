/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-19 14:20:34 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-19 14:20:34 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void)
{
	int N = 5;
	Zombie* horde = zombieHorde(N, "Zombie Horde");
	
	for (int i = 0 ; i < N ; i++)
		horde[i].announce();
	delete[] horde;
}
