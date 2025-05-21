#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

class	HumanB{
	public:
	void	attack();
	HumanB(std::string name);
	void	setWeapon(Weapon &type);

	private:
	std::string	name;
	Weapon	*type;
};

#endif
