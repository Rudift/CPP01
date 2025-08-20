/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-20 12:43:14 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-20 12:43:14 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

#  include <string>

class	Weapon{

	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string const&	getType(void);
		void	setType(std::string type);

	private:
		std::string	type;

};

#endif