/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:53:34 by gbazart           #+#    #+#             */
/*   Updated: 2024/01/30 16:11:35 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact(Contact contact)
{
	int i = 0;

	while (i < 8)
	{
		if (this->contacts[i].get_first_name() == "")
		{
			this->contacts[i] = contact;
			break;
		}
		i++;
	}
	if (i == 8)
	{
		i = 0;
		while (i < 7)
		{
			this->contacts[i] = this->contacts[i + 1];
			i++;
		}
		this->contacts[i] = contact;
	}
}

void	PhoneBook::operator>>(std::ostream &o)
{
	int	i;

	i = 0;
	o << "     index|first name| last name|  nickname" << std::endl;
	while (i < 8)
	{
		if (this->contacts[i].get_first_name() != "")
		{
			o << "         " << i << "|";
			if (this->contacts[i].get_first_name().length() > 10)
				o << std::setw(10) << this->contacts[i].get_first_name().substr(0, 9) << ".|";
			else
				o << std::setw(10) << this->contacts[i].get_first_name() << "|";
			if (this->contacts[i].get_last_name().length() > 10)
				o << std::setw(10) << this->contacts[i].get_last_name().substr(0, 9) << ".|";
			else
				o << std::setw(10) << this->contacts[i].get_last_name() << "|";
			if (this->contacts[i].get_nickname().length() > 10)
				o << std::setw(10) << this->contacts[i].get_nickname().substr(0, 9) << ".|";
			else
				o << std::setw(10) << this->contacts[i].get_nickname() << "|";
			o << std::endl;
		}
		i++;
	}
}

void	PhoneBook::search_contact(void)
{
	int			i;
	std::string	input;

	std::cout << "Please enter an index: ";
	std::getline(std::cin, input);
	if (std::cin.fail())
	{
		std::cerr << std::endl;
		return ;
	}
	if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
	{
		i = input[0] - '0';
		if (this->contacts[i].get_first_name() != "")
		{
			std::cout << "First name: " << this->contacts[i].get_first_name() << std::endl;
			std::cout << "Last name: " << this->contacts[i].get_last_name() << std::endl;
			std::cout << "Nickname: " << this->contacts[i].get_nickname() << std::endl;
			std::cout << "Phone: " << this->contacts[i].get_phone() << std::endl;
			std::cout << "Darkest secret: " << this->contacts[i].get_darkest_secret() << std::endl;
		}
		else
			std::cout << "Invalid index" << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}
