/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:38:17 by gbazart           #+#    #+#             */
/*   Updated: 2024/01/28 17:05:04 by gbazart          ###   ########.fr       */
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
		if (input == "ADD")
		{
			contact << std::cin;
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
	}
	return (0);
}
