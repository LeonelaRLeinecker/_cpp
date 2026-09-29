#include <fstream>
#include <iostream>

//abrir para lectura:
std::ifstream inFile("test.txt");
if (!inFile.is_open()) {
	std::cerr << "Error open file" << std::endl;
}

//abrir/crear para escritura
std::ofstream outFile("test.txt.replace");
if (!outFile.is_open()) {
	std::cerr << "error to create output file" << std::endl;
}
