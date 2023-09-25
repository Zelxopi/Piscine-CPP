/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:50:29 by mtrembla          #+#    #+#             */
/*   Updated: 2023/09/23 14:47:53 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::setFirstName(std::string str){
	_firstname = str;
}

std::string	Contact::getFirstName(void){
	return (_firstname);
}

void	Contact::setLastName(std::string str){
	_lastname = str;
}

std::string	Contact::getLastName(void){
	return (_lastname);
}

void	Contact::setNickname(std::string str){
	_nickname = str;
}

std::string	Contact::getNickname(void){
	return (_nickname);
}

void	Contact::setPhoneNumber(std::string str){
	_phonenumber = str;
}

std::string	Contact::getPhoneNumber(void){
	return (_phonenumber);
}

void	Contact::setDarkestSecret(std::string str){
	_darkestsecret = str;
}

std::string	Contact::getDarkestSecret(void){
	return (_darkestsecret);
}
