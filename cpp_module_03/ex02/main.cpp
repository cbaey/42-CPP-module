#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	d("d");
	FragTrap	e("e");

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
	d.highFivesGuys();
	e.highFivesGuys();
	d = e;
	e.attack("d");
	d.takeDamage(e.getAttack());
}
