#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	unamed("unamed");
	ClapTrap	badGuy("Gargamel");
	ClapTrap	target("GrandSchtroumpf");
	ClapTrap	veryBadGuy(badGuy);
	
	std::cout << std::endl;
	for (int i = 0; i < 11; i++)
		veryBadGuy.attack("Schtroumpfette");
	std::cout << std::endl;
	unamed.takeDamage(9);
	for (int i = 0; i < 11; i++)
		unamed.beRepaired(1);
	std::cout << std::endl;
	target.attack("Azrael");
	badGuy.attack(target.getName());
	std::cout << std::endl;
	target.takeDamage(5);
	target.beRepaired(2);
	target.takeDamage(6);
	target.takeDamage(5);
	target.beRepaired(10);
	std::cout << std::endl;
	badGuy.takeDamage(4);
	badGuy.beRepaired(2);
	badGuy.beRepaired(4);
	return (0);
}