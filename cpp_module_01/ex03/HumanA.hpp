#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

class	HumanA{
	public:
	void	attack();
	HumanA(std::string name, Weapon &type);

	private:
	std::string	name;
	Weapon	&type;
};

#endif
