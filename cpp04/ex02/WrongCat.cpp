#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	type = "WrongCat";
	std::cout << "Default constructor called for "
	<< type << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other) {
	std::cout << "constructor called for " <<
	type << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	std::cout << "Copy called for " << type << std::endl;
	if (this != &other) {
		WrongAnimal::operator=(other);
	}
	return *this;

}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called for " << type << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Miauuuu" << std::endl;
}