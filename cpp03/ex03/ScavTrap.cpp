#include "ScavTrap.hpp"
//inicializa clase padre por defecto
ScavTrap::ScavTrap() : ClapTrap() {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap defoult constructor called" << std::endl;
}

//constructor parametrizado utiliza ClapTrap(name)
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap parameterized constructor called for "
	<< _name << std::endl;
}

//constructor de copia, llama a la copia de claptrap
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor calledd for "
	<< _name << std::endl;
	*this = other;
}

//operador de asignacion
ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "ScavTrap assignment operator called" << std::endl;
	if (this !=&other) {
		//reuytiliza asignacion del padre
		ClapTrap::operator=(other);
	}
	return *this;
}
//destructor
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor calledd for "
	<< _name << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap" << _name 
	<< " is now in gate keeper mode!" << std::endl;
}
//override function attack to change message
void ScavTrap::attack(const std::string& target) {
	
	if (_hitPoints <= 0) {
		std::cout << "ScavTrap " << _name << " is dead and cannot attack"
		<< std::endl;
		return;
	}
	else if (_energyPoints <= 0) {
		std::cout << "ScavTrap " << _name << " has no energy left to attack"
		<< std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target 
	<< ", causing " << _attackDamage << " (20) points of damage!" << std::endl;
	
}
