#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	buffer;
	if (argc != 2)
		std::cout << "Please enter correct input.\n";
	else
		buffer.complain(argv[1]);
	return (0);
}
