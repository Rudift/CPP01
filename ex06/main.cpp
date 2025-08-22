/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-21 13:49:18 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-21 13:49:18 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av){
	if (ac != 2){
		std::cout << "I am not sure how tired I am today...\n" << "[ Probably complaining about insignificant problems ]" << std::endl;
		return(0);
	}
	Harl harl;
	harl.complain(av[1]);
	return (0);
}