#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog constructor has been called\n";
}

Dog::Dog(const Dog& a): Animal(a)
{
	std::cout << "Copy Dog constructor has been called\n";
	this->brain = new Brain();
	*this = a;
}

Dog& Dog::operator=(const Dog& a)
{
	std::cout << "Copy Dog assignment operator has been called\n";
	if (this != &a)
	{
		*this->brain = *a.brain;
		this->type = a.type;
	}
	return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor has been called\n";
}

void	Dog::makeSound()const
{
	std::cout << "Dog says : Woof !\n";
}

void	Dog::printIdea(int i)const
{
	std::cout << this->brain->getIdea(i) << std::endl;
}

void	Dog::setIdea(std::string idea, int i)
{
	this->brain->setIdea(idea, i);
}
