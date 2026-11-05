#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_ClapTrap_name"), ScavTrap(), FragTrap(), _name("Default") {
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = ScavTrap::_attackDamage;
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) :ClapTrap(other), ScavTrap(other), 
FragTrap(other), _name(other._name) {
	std::cout << "DiamondTrap copy constructor called for " 
	<< _name << std::endl;
}

//inicializa el abuelo con el subfijo 
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name),
FragTrap(name), _name(name) {

	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = ScavTrap::_attackDamage;
	std::cout << "DiamondTrap parameterized constructor called for "
	<< _name << std::endl;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
std::cout << "DiamondTrap assigment operator called for "
<< _name << std::endl;
if (this !=&other) {
	ClapTrap::operator=(other);
	ScavTrap::operator=(other);
	FragTrap::operator=(other);
	this->_name = other._name;
}
return *this;
}
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called for "
	<< _name << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "I am DamondTrap name: " << _name
	<< ", and my ClapTrap name is: " << ClapTrap::_name << std::endl;
}
