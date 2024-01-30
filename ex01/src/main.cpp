/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:38:17 by gbazart           #+#    #+#             */
/*   Updated: 2024/01/30 18:57:33 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <stdbool.h>

int	main(void)
{
	std::string		input;
	PhoneBook		phonebook;
	Contact			contact;
	bool			quit;

	quit = false;
	while (quit == false)
	{
		std::cout << "Please enter a command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, input);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cerr << "got eof";
			return (0);
		}
		if (input == "ADD")
		{
			contact << std::cin;
			if (contact.is_correct() == true)
				phonebook.add_contact(contact);
		}
		else if (input == "SEARCH")
		{
			phonebook >> std::cout;
			phonebook.search_contact();
		}
		else if (input == "EXIT")
		{
			std::cout << "EXIT" << std::endl;
			quit = true;
		}
		else
			std::cout << input << ": command not found" << std::endl;
	}
	return (0);
}
