#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	public:
		Contact::Contact(char *first_name, char *last_name, char *nickname, char *phone, char *darkest_secret);
		Contact::~Contact(void);
		void operator>>(std::ostream &out);
		void operator<<(std::istream &in);
	private:
		char *first_name;
		char *last_name;
		char *nickname;
		char *phone;
		char *darkest_secret;
};

#endif