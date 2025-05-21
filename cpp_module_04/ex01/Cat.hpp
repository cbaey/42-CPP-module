#ifndef CAT_HPP
#define CAT_HPP

#include<iostream>
#include"Animal.hpp"
#include"Brain.hpp"

class	Cat : public Animal{
	public:
		Cat();
		Cat(const Cat& a);
		Cat& operator=(const Cat& a);
		~Cat();
		void	makeSound()const;
		void	printIdea(int i)const;
		void	setIdea(std::string idea, int i);

	private:
		Brain* brain;
};

#endif
