#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>


class Zombie {
    private:
    std::string name;

    public:
    Zombie *next;
    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);

    void announce(void)
    {
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }
};

Zombie* zombieHorde(int N, std::string name);
Zombie* newZombie(std::string name);

#endif