#include "Zombie.hpp"

int main(void)
{
    Zombie zombie1("Kevin");
    Zombie *zombie2;
    
    zombie2 = newZombie("Antonia");
    randomChump("Effie");
    zombie1.announce();
    zombie2->announce();
    delete(zombie2);
    return (0);
}