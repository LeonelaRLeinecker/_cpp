#include "Harl.hpp"

Harl::Harl() {};
Harl::~Harl() {};

void Harl::debug(void) {
	std::cout << "[ DEBUG ]\n" 
	<< "I love having extra bacon for my"
	<< " 7XL-double-cheese-triple-pickle-specialketchup burger. "
	<< "I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]\n"
	<< "I cannot believe adding extra bacon costs more money. "
	<< "You didn’t put enough bacon in my burger!" 
	<< " If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void) {
	std::cout << "[ WARNING ]\n"
	<< "I think I deserve to have some extra bacon for free. "
	<< "I’ve been coming for years, whereas you started working here just last month."
	<< std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]\n"
	<< "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

int Harl::getLogLevelIndex(std::string level) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level) {
			return i;
		}
	}
	return -1;
}

void Harl::harlFilter(std::string level) {
	int index = getLogLevelIndex(level);
	//switch ejecucion en cascada.
	//ejecuta todas las opciones hasta un break o el final
	switch (index) {
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably compaining about insignificant problems ]"
			<< std::endl;
			break;
	}
}

void Harl::complain(std::string level)
{
	//array de punteros a metodos
	void (Harl::*methods[4])(void) = {
		&Harl::debug,
		&Harl::info, 
		&Harl::warning,
		&Harl::error
	};
	//array de niveles:
	std::string levels[4] = {
		"DEBUG", 
		"INFO", 
		"WARNING", 
		"ERROR"
	};
	
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level) {
			(this->*methods[i])();//sintaxis especial para llama el metodo mediante puntero
			return;
		}
	}
}