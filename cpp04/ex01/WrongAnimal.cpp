#include "WrongAnimal.hpp"

//default
WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "Constructor default is called"
	<< std::endl;
}

//copy
WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	std::cout << "Constructor copy called" << std::endl;
	*this = other;

}

//assinator
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

//destructor
WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor called" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::makeSound() const {
	std::cout << "general sound" << std::endl;
}