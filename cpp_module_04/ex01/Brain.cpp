#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor has been called\n";
}

Brain::Brain(const Brain& a)
{
	std::cout << "Copy Brain constructor has been called\n";
	*this = a;
}

Brain& Brain::operator=(const Brain& a)
{
	std::cout << "Copy Brain assignment operator has been called\n";
	if (this != &a)
	{
		for(int i = 0; i < 100; i++)
		{
			if (a.ideas[i].length() > 0)
				this->ideas[i] = a.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor has been called\n";
}

std::string	Brain::getIdea(int i)const
{
	if (i >= 0 && i <= 100)
		return (this->ideas[i]);
	else
		return "";
}

void	Brain::setIdea(std::string idea, int i)
{
	this->ideas[i] = idea;
}
