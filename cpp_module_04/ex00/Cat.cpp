#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "Cat";
	std::cout << "Cat constructor has been called\n";
}

Cat::Cat(const Cat& a): Animal(a)
{
	std::cout << "Copy Cat constructor has been called\n";
	*this = a;
}

Cat& Cat::operator=(const Cat& a)
{
	std::cout << "Copy Cat assignment operator has been called\n";
	if (this != &a)
	{
		this->type = a.type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called\n";
}

void	Cat::makeSound()const
{
	std::cout << "Cat says : Meowww !\n";
}
