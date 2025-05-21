#include"Zombie.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please enter the name for the zombies\n";
		return (0);
	}
	Zombie *ptr = zombieHorde(7, std::string(argv[1]));
	for (int i = 0; i < 7; i++)
	{
		std::cout << argv[1] << i << ": ";
		ptr[i].announce();
	}
	delete[](ptr);
	return (0);
}	
