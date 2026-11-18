#include "Cat.hpp"

Cat::Cat() : Animal() {
	type = "Cat";
	brain = new Brain();
	std::cout << "Default constructor called for "
	<< type << std::endl;
}

Cat::Cat(const Cat &other): Animal(other) {
	std::cout << "constructor called for " <<
	type << std::endl;
	brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Copy called for " << type << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	return *this;

}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat destructor called for " << type << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Miauuuu" << std::endl;
}