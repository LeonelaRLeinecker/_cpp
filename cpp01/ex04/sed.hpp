#ifndef SED_HPP
# define SED_HPP
# include <fstream>
# include <string>
# include <iostream>

class Sed {
	private:
	std::string _inFile;
	std::string _s1;
	std::string _s2;
	
	std::string _replaceOccurrences(std::string content);
	
	public:
	Sed(std::string inFile, std::string s1, std::string s2);
	~Sed();

	//metdo orquestador: divide el programa en pasos secuenciales.
	//si algo falla interrumpe el programa y devuelve false.
	bool execute(void);
};
#endif