#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<string>
#include<iostream>

class Zombie{
	public:
	void	announce();
	void	setter(std::string name);
	~Zombie ();

	private:
	std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
