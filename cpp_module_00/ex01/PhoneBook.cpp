#include"PhoneBook.hpp"

void	PhoneBook::add_contact()
{
	std::string buffer[5];
	std::string output[5] = {
		"Please input first name:", 
		"Please input last name:",
		"Please input nickname:",
		"Please input phone number:",
		"Please input darkest secret:"
	};
	for (int i = 0; i < 5; i++)
	{
		std::cout << output[i];
		if (!getline(std::cin, buffer[i]))
			return;
		if (buffer[i].empty())
			i--;
		else if (buffer[i].find_first_not_of(" \t\r\v\f") == std::string::npos)
			i--;
	}	
	contact[index % 8].set_contact(buffer);
	index++;
}

void	PhoneBook::search_contact()
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i << "|";
		contact[i].display_contact();
	}
}

void	PhoneBook::print_contact(int i)
{
	contact[i].print_contact_line();
}

PhoneBook::PhoneBook() : index(0){}
