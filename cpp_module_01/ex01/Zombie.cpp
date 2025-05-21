#include"Zombie.hpp"

void	Zombie::announce()
{
	std::cout << "Brainnnnzzzz\n";
}

Zombie:: ~Zombie()
{
	static int	i = 0;
		
        std::cout << name << i << ": destroyed\n";
	i++;
}

void	Zombie::setter(std::string name)
{
	this->name = name;
}
