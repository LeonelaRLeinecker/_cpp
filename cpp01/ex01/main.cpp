#include "Zombie.hpp"


int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "you must enter the zombies name" << std::endl;
        return 1;
    }
    int N = 4;
    std::string name = argv[1];
    Zombie* horda = zombieHorde(N, name);
    if (horda == NULL)
    {
        std::cout << "Error: horda created falure" << std::endl;
        return 1;
    }
    std::cout << "--- horda created. Horda appear ---" << std::endl;
    for (int i = 0; i < N; i++)
    {
        horda[i].announce();
    }
    std::cout << "\n--- destroying horda ---" << std::endl;
    delete[] horda;
    return 0;
}