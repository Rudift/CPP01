/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-20 08:37:07 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-20 08:37:07 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#  include <string>
#  include <iostream>

class Zombie {

	public :
		Zombie(std::string param);
		~Zombie(void);
		void	announce(void);
	private:
		std::string	name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif