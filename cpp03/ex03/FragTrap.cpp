#include "FragTrap.hpp"

//inicializa constructor a partir de clase padre
FragTrap::FragTrap() : ClapTrap() {
_hitPoints = 100;
_energyPoints = 100;
_attackDamage = 30;
std::cout << "FragTrap default constuctor called"
<< std::endl;
}
//constructor parametizer
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap parametizer constructor called for "
	<< _name << std::endl;
}
//copy
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	std::cout << "FragTrap copy constructor called for "
	<< _name << std::endl;
}
//operator
FragTrap &FragTrap::operator=(const FragTrap &other) {
	std::cout << "FragTrap assigment operator called"
	<< std::endl;
	if (this != &other) {
		//utiliza asgnación del padre
		ClapTrap::operator=(other);
	}
	return *this;
}
//destructor
FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called for "
	<< _name << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "High-fives" << std::endl;
}

void FragTrap::attack(const std::string& target) {
	
	if (_hitPoints <= 0) {
		std::cerr << "FragTrap " << _name << " is dead and cannot attack"
		<< std::endl;
		return;
	}
	else if (_energyPoints <= 0) {
		std::cerr << "FragTrap " << _name << " has no energy left to attack"
		<< std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "FragTrap " << _name << " attacks " << target 
	<< ", causing " << _attackDamage << " points of damage!" << std::endl;
	
}


