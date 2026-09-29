#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB{
	private:
	std::string _name;
	Weapon* _weapon; //puntero a Weapon
	
	public:
	HumanB(std::string _name);
	~HumanB();
	void attack(void);
	void setWeapon(Weapon& _weapon); //recibe referencia por parametro
};
#endif