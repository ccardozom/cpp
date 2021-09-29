#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "main.h"
#include "contact.hpp"

class Phonebook {
	public:
		Phonebook(int i);
		int	get_index() const;
		void set_index_increment(int i);
		int	get_index_contacts() const;
		void set_index_contacts(int i);
		Contact contact[8];
	private:
		int	_index;
		int _index_contacts;
};

#endif