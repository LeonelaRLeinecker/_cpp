#include "AAnimal.hpp"

//default
Animal::Animal() : type("Animal") {
	std::cout << "Constructor default is called"
	<< std::endl;
}

//copy
Animal::Animal(const Animal &other) {
	std::cout << "Constructor copy called" << std::endl;
	*this = other;

}

//assinator
Animal &Animal::operator=(const Animal &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

//destructor
Animal::~Animal() {
	std::cout << "Destructor called" << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}

/*void Animal::makeSound() const {
	std::cout << "general sound" << std::endl;
}*/