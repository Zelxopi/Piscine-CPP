/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:42:29 by mtrembla          #+#    #+#             */
/*   Updated: 2023/09/23 14:47:42 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class Contact{

	public:

		void	setFirstName(std::string str);
		void	setLastName(std::string str);
		void	setNickname(std::string str);
		void	setPhoneNumber(std::string str);
		void	setDarkestSecret(std::string str);

		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkestSecret(void);

	private:

		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phonenumber;
		std::string _darkestsecret;
};

class Phonebook{

	public:
	
	Contact contact[8];
};


#endif