#ifndef CONTACT_H
# define CONTACT_H

#include "main.h"

class Contact {
public:
	std::string		get_data(int id) const;
	void			get_str(int id) const;
	void			set_data(int id, std::string data);
private:
	std::string	_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone;
	std::string	_darkest_secret;
};

#endif