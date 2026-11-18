#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <string>
# include <iostream>

class Animal {
	protected:
	std::string type;

	public:
	Animal();
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal();

	virtual void makeSound() const = 0; //el const = 0 convierte la
	//funcion en pura y la clase abstracta
	std::string getType() const; 
};

#endif