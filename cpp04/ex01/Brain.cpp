#include "Brain.hpp"

Brain::Brain() {
	std::cout << "constructor default called for Brain"
	<< std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "copy called for Brian " << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "operator called for Brain" << std::endl;

	if (this != &other)
	{
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
std::cout << "destructor called for Brain" << std::endl;
}

