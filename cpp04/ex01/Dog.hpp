#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal, Brain {
	protected:
	std::string type;
	std::string ideas[100];


	public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	virtual ~Dog();

	virtual void makeSound() const;


};
#endif