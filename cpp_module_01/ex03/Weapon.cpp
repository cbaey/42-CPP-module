#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}	

const	std::string &Weapon::getType()
{
	return(type);
}

void	Weapon::setType(std::string string)
{
	type = string;
}
