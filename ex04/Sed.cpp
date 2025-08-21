/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-21 11:32:34 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-21 11:32:34 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

std::string	sed_replace(const std::string	&line, const std::string	&from, const std::string	&to){
	if (from.empty())
		return (line);
	std::string	result;
	std::string::size_type	pos = 0;
	std::string::size_type	found;

	while ((found = line.find(from, pos)) != std::string::npos){
		result.append(line.substr(pos, found - pos));
		result.append(to);
		pos = found + from.length();
	}
	result.append(line.substr(pos));
	return (result);
}