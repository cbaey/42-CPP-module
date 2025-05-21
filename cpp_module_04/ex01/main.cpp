#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			meta[i] = new Cat();
		else
			meta[i] = new Dog();
	}

	for (int i = 0; i < 10; i++)
	{
		meta[i]->makeSound();
	}
	
	for (int i = 0; i < 10; i++)
	{
		delete meta[i];
	}

	std::cout << "\n";	

	Dog *a = new Dog();
	std::cout << std::endl;
	std::cout << "test deep copy:" <<std::endl;
	std::cout << std::endl;
	a->setIdea("im a dog!", 0);
	a->setIdea("woof woof!", 1);
	a->setIdea("*make dog sounds", 2);
	for (int i = 0; i < 3; i++)
		a->printIdea(i);
	std::cout << std::endl;
	Dog *b = new Dog();
	*b = *a;
	std::cout << std::endl;
	for (int i = 0; i < 3; i++)
	{
		b->setIdea("bark bark!", i);
		b->printIdea(i);
	}
	std::cout << std::endl;
	for (int i = 0; i < 3; i++)
		a->printIdea(i);
	std::cout << std::endl;
	delete a;
	delete b;
	std::cout << std::endl;
	
	Dog basic;
	{
		Dog tmp = basic;
	}
	
	return (0);
}
