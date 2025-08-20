/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-20 12:07:54 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-20 12:07:54 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void){
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "Adresse de brain : " << &brain << std::endl;
	std::cout << "Adresse de stringPTR : " << stringPTR << std::endl;
	std::cout << "Adresse de stringREF : " << &stringREF << std::endl;

	std::cout << "Valeur de brain : " << brain << std::endl;
	std::cout << "Valeur de stringPTR : " << *stringPTR << std::endl;
	std::cout << "Valeur de stringREF : " << stringREF << std::endl;
}

