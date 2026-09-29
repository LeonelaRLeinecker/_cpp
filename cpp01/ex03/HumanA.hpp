#ifndef HUMANA_CPP
# define HUMANA_CPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA {
	private: 
			std::string _name;
			Weapon& _weapon; //atributo referencia a Weapon

	public:
			HumanA(std::string name, Weapon& _weapon);
			~HumanA(void);
			void attack(void);

};
#endif
