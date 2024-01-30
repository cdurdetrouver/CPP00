/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:52:11 by gbazart           #+#    #+#             */
/*   Updated: 2024/01/30 16:11:20 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

void Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void Contact::set_phone(std::string phone)
{
	this->_phone = phone;
}

std::string Contact::get_darkest_secret(void)
{
	return (this->_darkest_secret);
}

std::string Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string Contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string Contact::get_phone(void)
{
	return (this->_phone);
}

void	Contact::operator<<(std::istream &i)
{
	std::string input;

	std::cout << "Please enter the first name: ";
	std::getline(i, input);
	if (std::cin.fail())
	{
		std::cerr << std::endl;
		return ;
	}
	this->set_first_name(input);
	std::cout << "Please enter the last name: ";
	std::getline(i, input);
	if (std::cin.fail())
	{
		std::cerr << std::endl;
		return ;
	}
	this->set_last_name(input);
	std::cout << "Please enter the nickname: ";
	std::getline(i, input);
	if (std::cin.fail())
	{
		std::cerr << std::endl;
		return ;
	}
	this->set_nickname(input);
	std::cout << "Please enter the phone number: ";
	std::getline(i, input);
	if (std::cin.fail())
	{
		std::cerr << std::endl;
		return ;
	}
	this->set_phone(input);
	std::cout << "Please enter the darkest secret: ";
	std::getline(i, input);
	if (std::cin.fail())
	{
		std::cerr << std::endl;
		return ;
	}
	this->set_darkest_secret(input);
}
