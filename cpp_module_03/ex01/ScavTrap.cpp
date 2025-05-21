#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap constructor has been called\n";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " constructor has been called\n";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	this->name = name;
}

ScavTrap::ScavTrap(const ScavTrap& a): ClapTrap(a)
{
	std::cout << "Copy ScavTrap constructor has been called\n";
	*this = a;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& a)
{
	std::cout << "Copy ScavTrap assignment operator has been called\n";
	if (this != &a)
	{
		this->hitPoints = a.hitPoints;
		this->energyPoints = a.energyPoints;
		this->attackDamage = a.attackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor has been called\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (energyPoints <= 0)
		std::cout << "ScavTrap " << name << " has no energy points left!\n";
	else
	{
		energyPoints -= 1;
		std::cout << "ScavTrap " << name << " attacks ScavTrap " << target << ", causing " << attackDamage << " points of damage!\n";
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (hitPoints <= 0)
		std::cout << "ScavTrap " << name << " has no hit points left !\n";
	else
	{
		std::cout << "ScavTrap " << name << " takes " << amount << " amount of damage!\n";
		if (amount >= hitPoints)
		{
			hitPoints = 0;
			std::cout << "ScavTrap " << name << " has died.\n";
		}
		else
			hitPoints -= amount;
		std::cout << "ScavTrap " << name << " has " << hitPoints << " hitpoints !\n";
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (energyPoints <= 0)
		std::cout << "ScavTrap " << name << " has no energy points left /n";
	else
	{
		energyPoints -= 1;
		std::cout << "ScavTrap" << name << " repairs " << amount << " amount of damage!\n";
		hitPoints += amount;
		std::cout << "ScavTrap " << name << " has " << hitPoints << " hitpoints !\n";
	}

}

int	ScavTrap::getAttack()
{
	return (attackDamage);
}

void	ScavTrap::guardGate()
{
	if (hitPoints <= 0)
		std::cout << "ScavTrap " << name << " is dead!\n";
	else
		std::cout << "ScavTrap " << name << " is now in Gate keeper mode!\n";
}
