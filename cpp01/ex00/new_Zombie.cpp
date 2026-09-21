#include "Zombie.hpp"


Zombie* newZombie(std::string name) {
    //reservamos memora en heap con new para ujn objeto
    // pasamos name al cosntructo
    Zombie* zombieHeap = new Zombie(name);

    // devuelve el puntero al zombie de la heap
    return(zombieHeap);
       
}
