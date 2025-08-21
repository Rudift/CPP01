/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-21 09:29:03 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-21 09:29:03 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char **av){
	std::ifstream	ifs(av[1]);
	std::ofstream	ofs("popo");
	std::string line;

	if (ac != 4){
		std::cerr << "Invalid number of argument" << std::endl;
		return (1);
	}

	if (!ifs || !ofs){
		std::cerr << "Erreur ouverture fichiers\n";
		return 1;
	}
	while (std::getline(ifs, line)){
		std::string	replaced = sed_replace(line, av[2], av[3]);
		ofs << replaced << "\n";
	}
	return(0);
}
	// 
	// std::string		s1(av[2]);
	// std::string		s2(av[3]);
	// std::string		content;
	//std::string		path = av[1] + "." + "replace";
	// 
	// ifs >> content;
	// std::cout << content << std::endl;
	// while(getline)
	// 	ofs << content << std::endl;