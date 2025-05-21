#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "Dog";
	std::cout << "Dog constructor has been called\n";
}

Dog::Dog(const Dog& a): Animal(a)
{
	std::cout << "Copy Dog constructor has been called\n";
	*this = a;
}

Dog& Dog::operator=(const Dog& a)
{
	std::cout << "Copy Dog assignment operator has been called\n";
	if (this != &a)
	{
		this->type = a.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor has been called\n";
}

void	Dog::makeSound()const
{
	std::cout << "Dog says : Woof !\n";
}
