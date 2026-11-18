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

	//testing arrays

	std::cout << "\n=== TEST ARRAYS ANIMAL ===" << std::endl;
	int size = 6;
	Animal* animals[size];

	//creamos bucle para crear animales y gatos
	for (int idx = 0; idx < size; idx++) {
		if (idx < size / 2)
			animals[idx] = new Dog();
		else
			animals[idx] = new Cat();
	}

	std::cout << "\n--- delete all array ---" << std::endl;

	for (int idx = 0; idx < size; idx++) {
		delete animals[idx];
	}

	std::cout << "\n=== deep copy ===" << std::endl;

	Dog originalDog;
	{
		Dog copyDog = originalDog; // ejecuta constructor copia
		//copyDog muere aqui y borra su propio Brain.
		//pero originalDog sigue intacto y seguro

	}

	delete meta;
	delete j;//should not create a leak
	delete i;

	return 0;
}