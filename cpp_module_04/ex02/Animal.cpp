#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor has been called\n";
}

Animal::Animal(const Animal& a)
{
	std::cout << "Copy Animal constructor has been called\n";
	*this = a;
}

Animal& Animal::operator=(const Animal& a)
{
	std::cout << "Copy Animal assignment operator has been called\n";
	if (this != &a)
	{
	       this->type = a.type;	
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor has been called\n";
}

std::string	Animal::getType()const
{
	return (this->type);
}
