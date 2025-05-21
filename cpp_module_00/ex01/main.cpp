#include"PhoneBook.hpp"

int     convert_stdin(unsigned int& i)
{
	std::string buffer;
	getline(std::cin, buffer);
	std::stringstream ss(buffer);
	if (!(ss >> i) || ss.peek() != EOF)
		return (0);
	else
		return (1);
}

int     main()
{
	PhoneBook PhoneBook;
	while (1)
	{
		std::string buffer;
		getline(std::cin, buffer);
		if (!std::cin)
			break;
		if (buffer == "ADD")
			PhoneBook.add_contact();
		else if (buffer == "SEARCH")
		{
			PhoneBook.search_contact();
			std::cout << "Please enter index number:";
			unsigned int i;
			if (convert_stdin(i) && i < 8)
				PhoneBook.print_contact(i);
			else
				std::cout << "Error: invalid conversion. Please enter number from 0 to 7\n";
		}
		else if (buffer == "EXIT")
			break;
		else
			std::cout << "invalid input" << '\n';
	}
}
