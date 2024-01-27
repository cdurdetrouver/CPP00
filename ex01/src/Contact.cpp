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

void Contact::operator<<(std::istream &in)
{
	std::cout << "Put info or a new Contact" << std::endl;
	std::cout << "First Name"; in >> this->first_name;
	std::cout << "Last Name"; in >> this->last_name;
	std::cout << "Mickname : "; in >> this->nickname;
	std::cout << "Phone : "; in >> this->phone;
	std::cout << "Darkest Secret : "; in >> this->darkest_secret;
}