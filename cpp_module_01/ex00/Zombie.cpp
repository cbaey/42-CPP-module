#include"Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string store_name)
{
        this->name = store_name;
}

Zombie:: ~Zombie()
{
	std::cout << name << ": destroyed\n"; 
}
