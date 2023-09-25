/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:34:46 by mtrembla          #+#    #+#             */
/*   Updated: 2023/09/24 17:41:10 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
	
	public:

		HumanA(std::string name, Weapon&);
		void attack();
		~HumanA();

	private:

		std::string _name;
		Weapon&	_weapon;

};

#endif