#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("a");
	ClapTrap	b("b");
	ClapTrap	c("c");

	a.attack("b");
	b.takeDamage(a.getAttack());
	b.beRepaired(0);
	c.attack("b");
	b.takeDamage(c.getAttack());
}
