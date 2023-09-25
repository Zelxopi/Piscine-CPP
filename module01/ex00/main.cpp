/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:38:56 by mtrembla          #+#    #+#             */
/*   Updated: 2023/09/24 14:33:29 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){

	Zombie *zombie1  = newZombie("Adam");
	Zombie *zombie2  = newZombie("Madam");
	
	zombie1->announce();
	zombie2->announce();
	delete(zombie1);
	delete(zombie2);
	randomChump("Chump");
	
	return (0);
}