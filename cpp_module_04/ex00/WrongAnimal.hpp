#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include<iostream>
#include<string>

class	WrongAnimal{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& a);
		WrongAnimal& operator=(const WrongAnimal& a);
		virtual ~WrongAnimal();
		void	makeSound()const;
		std::string	getType()const;

	protected:
		std::string type;
};

#endif
