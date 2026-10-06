#include "Fixed.hpp"

int main()
{
	Fixed original;
	std::cout << "the name is 'Original'" << std::endl;
	Fixed copy(original);
	std::cout << "this copy contain original" << std::endl;
	Fixed assignator;
	std::cout << "this operator asignator put original in copy" << std::endl;
	assignator = copy;
	return 0;
}