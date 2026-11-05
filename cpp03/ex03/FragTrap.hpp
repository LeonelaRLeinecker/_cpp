#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap {
	public:
	//defoult
	FragTrap();
	//with parameter
	FragTrap(std::string name);
	//copy
	FragTrap(const FragTrap &other);
	//operator
	FragTrap &operator=(const FragTrap &other);
	//destructor
	~FragTrap();

	void highFivesGuys(void);
	void attack(const std::string& target);


};
#endif