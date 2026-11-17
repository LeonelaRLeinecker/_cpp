#include "Cat.hpp"

Cat::Cat() : Animal() {
	type = "Cat";
	std::cout << "Default constructor called for "
	<< type << std::endl;
}

Cat::Cat(const Cat &other): Animal(other) {
	std::cout << "constructor called for " <<
	type << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Copy called for " << type << std::endl;
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;

}

Cat::~Cat() {
	std::cout << "Cat destructor called for " << type << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Miauuuu" << std::endl;
}