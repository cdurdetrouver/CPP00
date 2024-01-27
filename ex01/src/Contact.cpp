/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:52:11 by gbazart           #+#    #+#             */
/*   Updated: 2024/01/27 18:52:11 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact(char *first_name, char *last_name, char *nickname, char *phone, char *darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone = phone;
	this->darkest_secret = darkest_secret;
}

Contact::~Contact()
{
}

void Contact::operator>>(std::ostream &out)
{
	out << "Put info or a new Contact" << std::endl;
	out << "First Name" << this->first_name << std::endl;
	out << "Last Name" << this->last_name << std::endl;
	out << "Mickname : " << this->nickname << std::endl;
	out << "Phone : " << this->phone << std::endl;
	out << "Darkest Secret : " << this->darkest_secret << std::endl;
}
