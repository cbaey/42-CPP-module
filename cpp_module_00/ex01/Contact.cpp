#include"PhoneBook.hpp"

void    Contact::set_contact(std::string info[5])
{
	first_name = info[0];
	last_name = info[1];
	nickname = info[2];
	phone_number = info[3];
	darkest_secret = info[4];
}

void    Contact::display_contact()
{
	if (first_name.length() <= 10)
		std::cout << std::setw(10) << first_name;
	else
		std::cout << first_name.substr(0, 9) << '.';
	std::cout << "|";
	if (last_name.length() <= 10)
		std::cout << std::setw(10) << last_name;
	else
		std::cout << last_name.substr(0, 9) << '.';
	std::cout << "|";
	if (nickname.length() <= 10)
		std::cout << std::setw(10) << nickname;
	else
		std::cout << nickname.substr(0, 9) << '.';
	std::cout << "\n";
}

void    Contact::print_contact_line()
{
	std::cout << "first name: " << first_name << '\n';
	std::cout << "last name: " << last_name << '\n';
	std::cout << "nickname: " << nickname << '\n';
	std::cout << "phone number: " << phone_number << '\n';
	std::cout << "darkest secret: " << darkest_secret << '\n';
}

