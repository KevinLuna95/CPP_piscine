#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde(int N, std::string name){
    Zombie *horde = NULL;
    Zombie *first = NULL;
    Zombie *prevHorde = NULL;
    std::string num;

    horde = newZombie(name);
    first = horde;
    while (N)
    {
        prevHorde = horde;
        std::cout << prevHorde << std::endl;
        std::stringstream ss;
        ss << N;
        ss >> num;
        horde = newZombie(name + " " + num);
        horde->next = prevHorde;
        N--;
    }
    horde->next = NULL;
    return (first);
}
