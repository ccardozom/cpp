#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie{
	public:
		Zombie(std::string str);
		Zombie();
		~Zombie();
		void	setName(std::string name);
		std::string getName() const;
		void	announce(void);
	private:
		std::string _name;
};

#endif