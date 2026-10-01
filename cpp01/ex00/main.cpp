#include "Zombie.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        std::cout << "type a name for your Zombie: " << std::endl; 
        std::string name = argv[1];

        //test randomChump
        std::cout << "--- randomChump testing on stack ---" << std::endl;
        randomChump(name);
        //zombie on heap
        std::cout << "\n--- newZombie testing on heap ---" << std::endl;
        Zombie * heapZombie = newZombie(name);
        //llamar newzombie fuera de la funcion. -> porque es un puntero
        heapZombie->announce();

        delete heapZombie;
    }

    //memoria reservada con new se libera con delete
    return 0;  
}