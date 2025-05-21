#include"HumanB.hpp"

void	HumanB::setWeapon(Weapon &type)
{
	this->type = &type;
}

void	HumanB::attack()
{
	if (type != NULL)
		std::cout << name << " attacks with their " << type->getType() << "\n";
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}
