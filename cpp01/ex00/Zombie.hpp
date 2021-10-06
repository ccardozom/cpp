#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie{
	public:
		Zombie(std::string str);
		~Zombie();

		void	announce(void);
	private:
		std::string _name;
};

#endif