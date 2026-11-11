#include "Dog.hpp"

Dog::Dog() : Animal() {
    type = "Dog";
    std::cout << "constructor default called for "
    << type << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
    std::cout << "copy constructor called for "
    << type << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Dog assignment called for " 
    << type << std::endl;
    if (this != &other) {
        Animal::operator=(other); //copiamos la parte animal
    }
    return *this;

}

Dog::~Dog() {
    std::cout << "destructor called for " << type << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Guau guau" << std::endl;
}