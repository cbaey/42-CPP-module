#ifndef DOG_HPP
#define DOG_HPP

#include<iostream>
#include"Animal.hpp"
#include"Brain.hpp"

class	Dog : public Animal{
	public:
		Dog();
		Dog(const Dog& a);
		Dog& operator=(const Dog& a);
		~Dog();
		void	makeSound()const;
		void	printIdea(int i)const;
		void	setIdea(std::string idea, int i);
	private:
		Brain *brain;
};

#endif
