#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
	public:
		PhoneBook(void);
		~PhoneBook();
		void	add_contact(Contact contact);
		void	operator>>(std::ostream &o);
		void	search_contact(void);
};

#endif
