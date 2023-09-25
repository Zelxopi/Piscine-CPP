/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:34:42 by mtrembla          #+#    #+#             */
/*   Updated: 2023/09/24 15:42:56 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack(){
	if (_weapon)
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " doesn't have a weapon " << std::endl;
}

void HumanB::setWeapon(Weapon& weapon){
	_weapon = &weapon;
}

HumanB::~HumanB(){}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){}