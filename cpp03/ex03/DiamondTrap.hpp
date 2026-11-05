#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

//heredea de ScavTrap y FragTrap
class DiamondTrap : public ScavTrap, public FragTrap {
	private:
	std::string _name;

	public:
	//default
	DiamondTrap();
	//copy
	DiamondTrap(const DiamondTrap &other);
	//parameter
	DiamondTrap(std::string name);
	//operator
	DiamondTrap &operator=(const DiamondTrap &other);
	//destructor
	~DiamondTrap();

	void whoAmI();

	//hereda attack de ScavTrap
	using ScavTrap::attack;

};

#endif
