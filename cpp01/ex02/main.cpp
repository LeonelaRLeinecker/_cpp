#include <iostream>
#include <string>

int main()
{
    //variable string original
    std::string str= "HI THIS IS BRAIN";
    
    //puntero al string. almacena la direccion con &
    std::string* stringPTR = &str;

    // referencia al string, un alias
    std::string& stringREF = str;

    //imprimiendo direcciones:
    std::cout << "--directions---" << std::endl;
    std::cout << "str variable direction: " << &str << std::endl;
    std::cout << "stringPTR directions: " << stringPTR << std::endl;
    std::cout << "stringREF direction: " << &stringREF << std::endl;

    //imprimiendo valores
    std::cout << "\n ---values---" << std::endl;
    std::cout << "str value: " << str << std::endl;
    std::cout << "stringPTR value: " << *stringPTR << std::endl;
    std::cout << "stringREF value: " << stringREF << std::endl;

    return 0;
}