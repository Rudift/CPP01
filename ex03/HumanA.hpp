/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-20 12:43:06 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-20 12:43:06 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP

# define HUMANA_HPP

#  include <string>
#  include <iostream>
#  include "Weapon.hpp"

class	HumanA{
	public:
		HumanA(std::string name, Weapon& arme);
		~HumanA(void);
		void	attack(void);
	private :
		std::string	name;
		Weapon& arme;
};

#endif