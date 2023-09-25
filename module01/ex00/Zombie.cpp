/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:51:34 by mtrembla          #+#    #+#             */
/*   Updated: 2023/09/24 14:41:24 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// std::string Zombie::getName(void){
// 	return (_name);
// }

Zombie::Zombie(){}

Zombie::Zombie(std::string name):_name(name){
	std::cout << "Constructor called on " << this->_name << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Destructor called on " << this->_name << std::endl;
}


