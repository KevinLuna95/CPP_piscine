#include "PhoneBook.class.hpp"

PhoneBook::~PhoneBook(void) {
    return;
};

PhoneBook::PhoneBook(void) {
    std::string res;

    this->i = 0;
    std::cout << "---Welcome to your PhoneBook:---" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    while (res.compare("EXIT") && res.compare("exit"))
    {
        this->print_menu();
        std::cin >> res;
        if(!res.compare("ADD") || !res.compare("add"))
        {
            this->add();
        }
        else if(!res.compare("SEARCH") || !res.compare("search"))
            this->search();
    }
    std::cout << "Erase PhoneBook, ByeBye!" << std::endl;
    return;
};

