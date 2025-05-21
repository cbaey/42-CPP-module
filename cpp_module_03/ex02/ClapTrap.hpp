#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>

class	ClapTrap{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& a);
		ClapTrap& operator=(const ClapTrap& a);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		int     getAttack();

	protected:
		std::string name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
};

#endif
