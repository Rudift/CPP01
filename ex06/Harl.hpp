/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-21 13:49:31 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-21 13:49:31 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#  include <string>
#  include <iostream>

class	Harl{

	public :
		Harl(void);
		~Harl(void);
		void	complain( std::string level );

	private :
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif
