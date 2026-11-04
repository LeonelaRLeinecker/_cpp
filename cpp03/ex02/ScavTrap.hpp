#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
# include "ClapTrap.hpp"

//ScavTrap herreda de ClapTrap
class ScavTrap : public ClapTrap {
	public: 
	ScavTrap();
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);
	~ScavTrap();
	//constructor parametized
	ScavTrap(std::string name);


	void guardGate();
	void attack(const std::string& target);
};
#endif