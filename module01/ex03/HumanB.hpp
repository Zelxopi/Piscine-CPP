/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:34:39 by mtrembla          #+#    #+#             */
/*   Updated: 2023/09/24 17:41:18 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
	
	public:

		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon& weapon);
		~HumanB();

	private:

		std::string _name;
		Weapon*	_weapon;

};

#endif