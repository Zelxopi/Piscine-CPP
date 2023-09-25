/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:50:48 by mtrembla          #+#    #+#             */
/*   Updated: 2023/09/24 15:03:52 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *horde;
	int N;
	
	N = 5;
	horde = zombieHorde(N, "Adam");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete []horde;
	return (0);
}