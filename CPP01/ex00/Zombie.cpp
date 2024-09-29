#include "Zombie.hpp"

Zombie::Zombie(void) {

    return;
};

Zombie::Zombie(std::string name) {
    this->name = name;
    return;
};

Zombie::~Zombie(void) {
    std::cout << this->name << std::endl;
    return;
};
