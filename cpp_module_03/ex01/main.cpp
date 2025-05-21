#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	d("d");
	ScavTrap	e("e");

	e.attack("d");
	d.takeDamage(e.getAttack());
	e.attack("d");
	d.takeDamage(e.getAttack());
	e.attack("d");
	d.takeDamage(e.getAttack());
	e.attack("d");
	d.takeDamage(e.getAttack());
	e.attack("d");
	d.takeDamage(e.getAttack());
	e.attack("d");
	d.takeDamage(e.getAttack());
	d.guardGate();
	e.guardGate();
	d = e;
	e.attack("d");
	d.takeDamage(e.getAttack());
}
