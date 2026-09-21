#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie {
    private:
        std::string _name;

    public:
        Zombie(void); //cosntructor por defecto
        Zombie(std::string name); //cosntructor con parametro;
        ~Zombie(void); //destructor

        void announce(void);
        void setName(std::string name);

};
Zombie* zombieHorde(int N, std::string name); //creador de array dianmico
#endif