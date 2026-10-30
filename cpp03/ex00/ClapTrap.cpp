#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Constructor is called for "
	<< _name << std::endl;
}

ClapTrap::ClapTrap(std::string name) :_name (name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Parameterized constructor called for "
	<< _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "Constructor copy called for "
	<< other._name << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called for "
	<< _name << std::endl; 
}

void ClapTrap::attack(const std::string& target) {
	
	if (_hitPoints <= 0) {
		std::cerr << "ClapTrap " << _name << " is dead and cannot attack"
		<< std::endl;
		return;
	}
	else if (_energyPoints <= 0) {
		std::cerr << "ClapTrap " << _name << " has no energy left to attack"
		<< std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target 
	<< ", causing " << _attackDamage << " points of damage!" << std::endl;
	
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints <= 0) { 
		std::cerr << "ClapTrap " << _name << "is already destroyed!" << std::endl;
		return;
	}
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage! "
	 <<"Current HP: " << _hitPoints << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints == 0) { 
		std::cerr << "ClapTrap " << _name << "is not alive,"
		<< " it can not be repaired"<< std::endl;
	}
	else if (_energyPoints <= 0) {
		std::cerr << "ClapTrap " << _name << " has not anergy,"
		<< " can not be repaired" << std::endl;
	}
	else {
		this-> _energyPoints--;
		amount++;
		std::cout << "ClapTrap " << this->_name 
		<< " was repared, using " << amount << " points. Now has " <<
		_energyPoints << " points of energy!" << std::endl;
	}
}



