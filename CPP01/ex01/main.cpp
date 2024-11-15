#include "Zombie.hpp"

int main(void){
    Zombie *horde = zombieHorde(5, "hola");
    horde->announce();
    std::cout << horde->next << std::endl;

    return (0);
}