#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	// testing WrongAnimal y WrongCat
	std::cout << "\n--- PRUEBAS WRONG ---" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound(); // Debería imprimir el sonido de WrongAnimal, ¡no el de WrongCat!
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongCat;

	delete meta;
	delete j;//should not create a leak
	delete i;

	return 0;
}