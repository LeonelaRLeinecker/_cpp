#include <fstream>
#include <iostream>

// //abrir para lectura:
// std::ifstream inFile("test.txt") {

// 	if (!inFile.is_open()) {
// 		std::cerr << "Error open file" << std::endl;
// 	}
// }
	
// //abrir/crear para escritura
// std::ofstream outFile("test.txt.replace") {
	
// 	if (!outFile.is_open()) {
// 		std::cerr << "error to create output file" << std::endl;
// 	}
// }

std::string replaceOccurrences(std::string content, std::string s1, std::string s2) {
	if (s1.empty())
		return content;
	
	std::string result = "";
	size_t pos = 0;
	size_t found;

	while ((found = content.find(s1, pos)) != std::string::npos)
	{
		//añade texto desde pos hasta s1
		result += content.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();

	}
	result += content.substr(pos);
	return result;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{ 
		std::cout << "Error. You must enter 3 arguments. One file, two words."
			<< std::endl;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	std::ifstream inFile(argv[1]); //abre archivo
	if (!inFile.is_open()) {
		std::cerr << "Error open file " << filename << std::endl;
		return 1;
	}
	std::string content = "";
	std::string line;
	while (std::getline(inFile, line)) {
		content += line;
		if (!inFile.eof()) //si no es la ultima linea \n
			content += "\n";
	}
	inFile.close(); //cierra archivo
	//crear outout file
	std::string outFilename = filename + ".replace";
	//Toma el nombre del archivo (como texto plano de C).

//Crea/Abre ese archivo en el disco preparado para recibir 
//texto a través de la variable outFile. Si el archivo no existía, lo crea; si ya existía, lo sobrescribe desde cero.
	std::ofstream outFile(outFilename.c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Error. Not created file " << outFilename
			<< std::endl;
			return 1;
	}
	std::string replacedContent = replaceOccurrences(content, s1, s2);
	outFile << replacedContent;
	outFile.close();
	return 0;	
}
