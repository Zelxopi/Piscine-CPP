/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:49:03 by mtrembla          #+#    #+#             */
/*   Updated: 2023/09/23 14:47:51 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int alnum_string(std::string info)
{
	for(int i = 0; info[i] ; i++)
		if(!isalnum(info[i]) && info[i] != '-' && info[i] != ' '){
			std::cout << "This Phonebook only accept alphanumeric character and hyphens " << std::endl;
			return(0);
		}
	return(1);
}

std::string valid_field(std::string info)
{
	while(info.empty() || !alnum_string(info)){
		std::cout << "Field cannot be empty, please enter info > ";
		getline(std::cin, info);
	}
	return(info);
}

void	add(Contact *contact)
{
	std::string	input;
	static int i = 0;

	if (i == 9)
		i = 0;
	std::cout << "FIRST NAME: ";
	getline(std::cin, input);
	contact[i].setFirstName(valid_field(input));
	std::cout << "LAST NAME: ";
	getline(std::cin, input);
	contact[i].setLastName(valid_field(input));
	std::cout << "NICKNAME: ";
	getline(std::cin, input);
	contact[i].setNickname(valid_field(input));
	std::cout << "PHONE NUMBER: ";
	getline(std::cin, input);
	contact[i].setPhoneNumber(valid_field(input));
	std::cout << "DARKEST SECRET: ";
	getline(std::cin, input);
	contact[i].setDarkestSecret(valid_field(input));
	i++;
}

std::string cut(std::string info)
{
	if (info.size() > 10){
		info.resize(10);
		info.back() = '.';
	}
	return(info);
}

int valid_index(std::string info)
{
	if (info.size() == 1 && isdigit(info[0]))
		return(1);
	std::cout << "invalid" << std::endl;
	return(0);
}

void	search(Contact *contact)
{
	int i = 0;
	std::string	input;

	while(!contact[i].getFirstName().empty())
	{
		std::cout << std::setw(10) << i + 1 << "|"
			<< std::setw(10) << cut(contact[i].getFirstName()) << "|"
			<< std::setw(10) << cut(contact[i].getLastName()) << "|"
			<< std::setw(10) << cut(contact[i].getNickname()) << "|"
			<< std::endl;
		i++;
	}
	std::cout << "Select index > ";
	getline(std::cin, input);
	if (valid_index(input) && (i = std::stoi(input)) && !contact[i - 1].getFirstName().empty()){
		std::cout << contact[i - 1].getFirstName() << std::endl;
		std::cout << contact[i - 1].getLastName() << std::endl;
		std::cout << contact[i - 1].getNickname() << std::endl;
		std::cout << contact[i - 1].getPhoneNumber() << std::endl;
		std::cout << contact[i - 1].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}

int main(void) {

	std::string	input;
	Phonebook phonebook;

	std::cout << std::endl << "--Welcome to PhoneBook--" << std::endl << std::endl;
	while (1)
	{
		std::cout << "> ";
		getline(std::cin, input);
		if (input == "ADD")
			add(phonebook.contact);
		if (input == "SEARCH")
			search(phonebook.contact);
		if (input == "EXIT")
			break;
	}
	
    return(0);
}