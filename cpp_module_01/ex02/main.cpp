#include<iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "memory address for string: " << &string << "\n";
	std::cout << "memory address held by stringPTR: " << stringPTR << "\n";
	std::cout << "memory address held by stringREF: " << &stringREF << "\n";
	std::cout << "\n";
	std::cout << "value of string: " << string << "\n";
	std::cout << "value pointed by stringPTR: " << *stringPTR << "\n";
	std::cout << "value pointed by stringREF: " << stringREF << "\n";
}
