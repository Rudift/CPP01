/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-21 11:32:31 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-21 11:32:31 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP
#include <iostream>
#include <string>
#include <fstream>
std::string	sed_replace(const std::string	&line, const std::string	&from, const std::string	&to);
#endif