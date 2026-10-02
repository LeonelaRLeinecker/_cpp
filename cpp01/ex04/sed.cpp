#include "sed.hpp"

Sed::Sed(std::string inFile, std::string s1, std::string s2) :_inFile(inFile), _s1(s1), _s2(s2) {
}
Sed::~Sed() {}

std::string Sed::_replaceOccurrences(std::string content) {
	if (this->_s1.empty())
		return content;
	
	std::string result = "";
	size_t pos = 0;
	size_t found;

	while ((found = content.find(this->_s1, pos)) != std::string::npos)
	{
		//añade texto desde pos hasta s1
		result += content.substr(pos, found - pos);
		result += this->_s2;
		pos = found + this->_s1.length();

	}
	result += content.substr(pos);
	return result;
}

//orquestador:
bool Sed::execute(void) {
	//abrir archivo de lectura
	std::ifstream inFile(this->_inFile.c_str());
	if (!inFile.is_open()) {
		std::cerr << "Error: Could not open file "
		<< this->_inFile <<std::endl;
		return false;
	}
	
	//leer contenido
	std::string content = "";
	std::string line;
	while (std::getline(inFile, line)) {
		content += line;
		if (!inFile.eof())
			content += "\n";
	}
	inFile.close();

	//crear archivo de salida replace
	std::string outFileName = this->_inFile + ".replace";
	//abre para escribir
	std::ofstream outFile(outFileName.c_str());
	if (!outFile.is_open()) {
		std::cerr << "Error: Could nor create output file"
		<< outFileName << std::endl;
		return false;
	}

	//reemplaza y muestra archivo salida 
	std::string replaceContent = this->_replaceOccurrences(content);
	outFile << replaceContent;
	outFile.close();
	return true;
}