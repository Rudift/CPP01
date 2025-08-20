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
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		std::string	name;
	private:
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name );
#endif