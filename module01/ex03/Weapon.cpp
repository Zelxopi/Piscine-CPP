/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:34:33 by mtrembla          #+#    #+#             */
/*   Updated: 2023/09/24 15:40:36 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType(){
	const std::string& str = _type;
	return (str);
}

void Weapon::setType(std::string type){
	_type = type;
}

Weapon::~Weapon(){}

Weapon::Weapon(std::string type) : _type(type){}