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
	std::cout << "the life of Bob" << std::endl;
	Zombie *bob = newZombie("Bob");
	bob->announce();
	delete bob;

	std::cout << "the life of Igor the random chump" << std::endl;
	randomChump("Igor");
}