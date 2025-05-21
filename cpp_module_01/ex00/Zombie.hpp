#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<string>
#include<iostream>

class Zombie{
	public:
	void	announce();
	Zombie (std::string new_name);
	~Zombie ();

	private:
	std::string name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
