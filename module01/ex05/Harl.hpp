/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:09:48 by mtrembla          #+#    #+#             */
/*   Updated: 2023/09/24 17:41:33 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl{
	
	public:

		Harl();
		void complain(std::string level);
		void (Harl::*functionPointer[4])(void);
		~Harl();

	private:

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif