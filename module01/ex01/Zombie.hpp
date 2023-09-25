/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:49:58 by mtrembla          #+#    #+#             */
/*   Updated: 2023/09/24 15:08:31 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie{
	
	public:
	
		void announce();
		Zombie(std::string name);
		void setName(std::string name);
		std::string getName();
		Zombie();
		~Zombie();

	private:

		std::string _name;
};

Zombie*    zombieHorde( int N, std::string name );

#endif