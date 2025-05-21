#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor has been called\n";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " constructor has been called\n";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap& a)
{
	std::cout << "Copy ClapTrap constructor has been called\n";
	*this = a;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& a)
{
	std::cout << "Copy ClapTrap assignment operator has been called\n";
	if (this != &a)
	{ 
		this->hitPoints = a.hitPoints;
		this->energyPoints = a.energyPoints;
		this->attackDamage = a.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor has been called\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (energyPoints <= 0)
		std::cout << "ClapTrap " << name << " has no energy points left!\n";
	else
	{
		energyPoints -= 1;
		std::cout << "ClapTrap " << name << " attacks ClapTrap " << target << ", causing " << attackDamage << " points of damage!\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " has no hit points left !\n";
	else
	{
		std::cout << "ClapTrap " << name << " takes " << amount << " amount of damage!\n";
		if (amount >= hitPoints)
		{
			hitPoints = 0;
			std::cout << "ClapTrap " << name << " has died.\n";
		}
		else
			hitPoints -= amount;
		std::cout << "ClapTrap " << name << " has " << hitPoints << " hitpoints !\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints <= 0)
		std::cout << "ClapTrap " << name << " has no energy points left /n";
	else
	{
		energyPoints -= 1;
		std::cout << "ClapTrap " << name << " repairs " << amount << " amount of damage!\n";
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " has " << hitPoints << " hitpoints !\n";
	}

}

int	ClapTrap::getAttack()
{
	return (attackDamage);
}
