#include "Harl.hpp"

int main(int argc, char **argv) {
    Harl harl;

	if (argc != 2)
	{
		std::cerr << "you must enter type level\n" << std::endl;
		std::cerr << "choice one of those options:\n"
		<< "DEBUG,\n"
		<< "INFO,\n"
		<< "WARNING,\n"
		<< "ERROR" << std::endl; 
		return 1;
	}
	
	std::string level = argv[1];
	if (level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR")
	{
		harl.complain(level);
	}
	else
	{
		std::cerr << "choice one of those options:\n"
		<< "DEBUG,\n"
		<< "INFO,\n"
		<< "WARNING,\n"
		<< "ERROR" << std::endl; 
		return 1;
	}
	
    // std::cout << "--- testing DEBUG ---" << std::endl;
    // harl.complain("DEBUG");

    // std::cout << "\n--- testing INFO ---" << std::endl;
    // harl.complain("INFO");

    // std::cout << "\n--- testing WARNING ---" << std::endl;
    // harl.complain("WARNING");

    // std::cout << "\n--- testing ERROR ---" << std::endl;
    // harl.complain("ERROR");

    // std::cout << "\n--- testing others words ---" << std::endl;
    // harl.complain("INFOERROR"); // No imprimirá nada
	
    return 0;
}