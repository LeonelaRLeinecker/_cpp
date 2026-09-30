#include "Harl.hpp"

int main(void) {
    Harl harl;

    std::cout << "--- testing DEBUG ---" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\n--- testing INFO ---" << std::endl;
    harl.complain("INFO");

    std::cout << "\n--- testing WARNING ---" << std::endl;
    harl.complain("WARNING");

    std::cout << "\n--- testing ERROR ---" << std::endl;
    harl.complain("ERROR");

    std::cout << "\n--- testing others words ---" << std::endl;
    harl.complain("INFOERROR"); // No imprimirá nada
	
    return 0;
}