#include "AMateria.hpp"

AMateria::AMateria() : type("") {

	std::cout << "AMAterial default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type) {
	std::cout << "AMateria constructor called for " << this->type << std::endl;

}
AMateria::AMateria(const AMateria &other) : type(other.type) {
	std::cout << "constructor copy called for "
	<< type << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other) {
	std::cout << "asignator called for "
	<< type << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}

	return *this;
}

AMateria::~AMateria() {
	std::cout << "destructor called for "
	<< type << std::endl;
}

std::string const & AMateria::getType() const {
	return this->type;
}


void AMateria::use(ICharacter& target) {
	// Puede estar vacío, o simplemente no hacer nada genérico,
	// ya que Ice y Cure lo van a sobrescribir (override) por completo.
	(void)target; // Truco de C++ para evitar warnings de parámetro no usado
}