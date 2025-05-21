#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor has been called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& a)
{
	std::cout << "Copy WrongAnimal constructor has been called\n";
	*this = a;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& a)
{
	std::cout << "Copy WrongAnimal assignment operator has been called\n";
	if (this != &a)
	{
	       this->type = a.type;	
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor has been called\n";
}

void	WrongAnimal::makeSound()const
{
	std::cout << "This WrongAnimal makes no sound!\n";
}

std::string	WrongAnimal::getType()const
{
	return (this->type);
}
