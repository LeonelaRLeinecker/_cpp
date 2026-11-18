#include "Dog.hpp"
#include "Brain.hpp"



Dog::Dog() : Animal() {
	type = "Dog";
	brain = new Brain();
	std::cout << "constructor default called for "
	<< type << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << "copy constructor called for "
	<< type << std::endl;
	brain = new Brain(*other.brain); //copia profunda: clonamos cerebro 
	//usando el constructor de copia de Brain
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog assignment called for " 
	<< type << std::endl;
		if (this != &other) {
			Animal::operator=(other); //copiamos la parte animal
			//copia profunda en la asignacion: borramos el viejo cerebro
			//y clonamos el nuevo
			delete brain;
			brain = new Brain(*other.brain);

	}
	return *this;

}

Dog::~Dog() {
	delete brain; //IMPORTANTE liberar memoria de brain apra evitar fugas
	std::cout << "destructor called for " << type << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Guau guau" << std::endl;
}

