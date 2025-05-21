#include"Zombie.hpp"

int	main(int argc, char **argv)
{

	if (argc != 2)
		std::cout << "please enter first name only.\n";
	else
	{
		Zombie *ptr = newZombie(std::string(argv[1]) + " heap");
		ptr->announce();
		randomChump(std::string(argv[1]) + " stack");
		delete ptr;
	}
	return (0);
}	
