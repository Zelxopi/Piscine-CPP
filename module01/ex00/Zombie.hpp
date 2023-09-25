/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:33:57 by mtrembla          #+#    #+#             */
/*   Updated: 2023/09/24 14:41:00 by mtrembla         ###   ########.fr       */
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
		Zombie();
		// std::string getName();
		~Zombie();

	private:

		std::string _name;
};

		Zombie* newZombie(std::string name);
		void randomChump(std::string name);

#endif