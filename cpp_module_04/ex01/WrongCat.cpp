#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor has been called\n";
}

WrongCat::WrongCat(const WrongCat& a): WrongAnimal(a)
{
	std::cout << "Copy WrongCat constructor has been called\n";
	*this = a;
}

WrongCat& WrongCat::operator=(const WrongCat& a)
{
	std::cout << "Copy WrongCat assignment operator has been called\n";
	if (this != &a)
	{
		this->type = a.type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor has been called\n";
}

void	WrongCat::makeSound()const
{
	std::cout << "WrongCat says : Meowww !\n";
}
