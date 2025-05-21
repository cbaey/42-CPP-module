#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include<iostream>
#include"ClapTrap.hpp"

class	ScavTrap : public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& a);
		ScavTrap& operator=(const ScavTrap& a);
		~ScavTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		int     getAttack();
		void	guardGate();
};

#endif
