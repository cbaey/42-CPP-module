#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap constructor has been called\n";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap " << name << " constructor has been called\n";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	this->name = name;
}

FragTrap::FragTrap(const FragTrap& a): ClapTrap(a)
{
	std::cout << "Copy FragTrap constructor has been called\n";
	*this = a;
}

FragTrap& FragTrap::operator=(const FragTrap& a)
{
	std::cout << "Copy FragTrap assignment operator has been called\n";
	if (this != &a)
	{
		this->hitPoints = a.hitPoints;
		this->energyPoints = a.energyPoints;
		this->attackDamage = a.attackDamage;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor has been called\n";
}

void	FragTrap::attack(const std::string& target)
{
	if (energyPoints <= 0)
		std::cout << "FragTrap " << name << " has no energy points left!\n";
	else
	{
		energyPoints -= 1;
		std::cout << "FragTrap " << name << " attacks FragTrap " << target << ", causing " << attackDamage << " points of damage!\n";
	}
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (hitPoints <= 0)
		std::cout << "FragTrap " << name << " has no hit points left !\n";
	else
	{
		std::cout << "FragTrap " << name << " takes " << amount << " amount of damage!\n";
		if (amount >= hitPoints)
		{
			hitPoints = 0;
			std::cout << "FragTrap " << name << " has died.\n";
		}
		else
			hitPoints -= amount;
		std::cout << "FragTrap " << name << " has " << hitPoints << " hitpoints !\n";
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (energyPoints <= 0)
		std::cout << "FragTrap " << name << " has no energy points left /n";
	else
	{
		energyPoints -= 1;
		std::cout << "FragTrap" << name << " repairs " << amount << " amount of damage!\n";
		hitPoints += amount;
		std::cout << "FragTrap " << name << " has " << hitPoints << " hitpoints !\n";
	}

}

int	FragTrap::getAttack()
{
	return (attackDamage);
}

void	FragTrap::highFivesGuys(void)
{
	if (hitPoints <= 0)
		std::cout << "FragTrap " << name << " is dead!\n";
	else
		std::cout << "FragTrap " << name << " requests a high five!\n";
}
