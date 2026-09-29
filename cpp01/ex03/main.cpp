#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club"); //creamos arma
		HumanA bob("Bob", club); //creamos humano con arma de nacimiento
		bob.attack(); //ataca
		club.setType("harm"); //cambia de arma
		bob.attack(); //ataca de nuevo
	} //scope local
	{
		Weapon club = Weapon("pops");//crea arma
		HumanB fred("fred");//crea humano
		fred.setWeapon(club);//asigna arma al humano
		fred.attack(); // ataca
		club.setType("kiss"); // cambia de arma
		fred.attack(); // ataca de nuevo
	}
	return 0;
}