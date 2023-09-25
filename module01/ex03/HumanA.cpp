/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:34:49 by mtrembla          #+#    #+#             */
/*   Updated: 2023/09/24 15:37:09 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl; 
}

HumanA::~HumanA() {}

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon){}