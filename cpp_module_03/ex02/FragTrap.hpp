#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include<iostream>
#include"ClapTrap.hpp"

class	FragTrap : public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& a);
		FragTrap& operator=(const FragTrap& a);
		~FragTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		int     getAttack();
		void	highFivesGuys(void);
};

#endif
