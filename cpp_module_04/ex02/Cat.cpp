#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat constructor has been called\n";
}

Cat::Cat(const Cat& a): Animal(a)
{
	std::cout << "Copy Cat constructor has been called\n";
	this->brain = new Brain();
	*this = a;
}

Cat& Cat::operator=(const Cat& a)
{
	std::cout << "Copy Cat assignment operator has been called\n";
	if (this != &a)
	{
		*this->brain = *a.brain;
		this->type = a.type;
	}
	return *this;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor has been called\n";
}

void	Cat::makeSound()const
{
	std::cout << "Cat says : Meowww !\n";
}

void	Cat::printIdea(int i)const
{
	std::cout << this->brain->getIdea(i) << std::endl;
}

void	Cat::setIdea(std::string idea, int i)
{
	this->brain->setIdea(idea, i);
}
