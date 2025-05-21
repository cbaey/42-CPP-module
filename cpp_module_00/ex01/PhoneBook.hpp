#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include<string>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<sstream>

class Contact{
	public:
		void set_contact(std::string info[5]);
		void display_contact();
		void print_contact_line();
	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

class PhoneBook{
	public:
		void add_contact();
		void search_contact();
		void print_contact(int i);
		PhoneBook();
	private:
		Contact contact[8];
		int	index;
};

#endif
