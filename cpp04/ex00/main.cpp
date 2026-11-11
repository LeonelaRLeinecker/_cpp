#include "Animal.hpp"
#include "Dog.hpp"

int main() {
    std::string type = "Dog";
    Animal animal;
    animal.makeSound();
    Dog dog;
    dog.makeSound();

       
    return 0;
}