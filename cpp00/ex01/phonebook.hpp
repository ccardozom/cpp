#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "main.h"
#include "contact.hpp"
#define MAX_CONTACT 8

class Phonebook {
	public:
		Phonebook(int i);
		int	get_index() const;
		int	get_index_contacts() const;
		void set_index_increment(int i);
		void set_index_contacts(int i);
		Contact contact[MAX_CONTACT];
	private:
		int	_index;
		int _index_contacts;
};

#endif