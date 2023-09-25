/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:34:29 by mtrembla          #+#    #+#             */
/*   Updated: 2023/09/24 17:41:24 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon{

	public:

		Weapon(std::string type);
		const std::string& getType();
		void setType(std::string type);
		~Weapon();
		
	private:
	
		std::string _type;
};


#endif