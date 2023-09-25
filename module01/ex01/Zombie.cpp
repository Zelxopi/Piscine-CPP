/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:51:17 by mtrembla          #+#    #+#             */
/*   Updated: 2023/09/24 15:15:56 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
	_name = name;
}

std::string Zombie::getName(void){
	return (_name);
}

Zombie::Zombie(){}

Zombie::~Zombie(){
	std::cout << "Destructor called on " << this->_name << std::endl;
}