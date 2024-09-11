#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"
# include <string>

class PhoneBook{
    private:
        Contact contacts[8];
        int     i;

    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void print_menu(void)
        {
            std::cout << "--------------MENU--------------" << std::endl;
            std::cout << "ADD: save a new contact" << std::endl;
            std::cout << "SEARCH: display your PhoneBook" << std::endl;
            std::cout << "EXIT" << std::endl;
            std::cout << "¿Whats your acction?" << std::endl;
        };
        void	add(void)
        {
            Contact contact;
            std::string first_name;
            std::string last_name;
            std::string nikname;
            std::string telephone;

            std::cout << "Write the first name:" << std::endl;
            std::cin >> first_name;
            while(first_name.length() < 1)
            {
                std::cout << "The first name needs 1 or more letter" << std::endl;
                std::cin >> first_name;
            }

            std::cout << "Write the last name:" << std::endl;
            std::cin >> last_name;
            while(last_name.length() < 1)
            {
                std::cout << "The last name needs 1 or more letter" << std::endl;
                std::cin >> last_name;
            }

            std::cout << "Write the nickname:" << std::endl;
            std::cin >> nikname;
            while(nikname.length() < 1)
            {
                std::cout << "The nickname needs 1 or more letter" << std::endl;
                std::cin >> nikname;
            }

            std::cout << "Write the telephone number:" << std::endl;
            std::cin >> telephone;
            contacts[0].is_number(telephone);
            while(telephone.length() < 6 || !contacts[0].is_number(telephone))
            {
                if (telephone.length() < 6)
                    std::cout << "The telephone needs 6 or more numbers" << std::endl;
                else
                    std::cout << "The telephone only can be numbers" << std::endl;
                std::cin >> telephone;
            }

            if(this->i > 7)
            {
                contact.add(i,first_name, last_name, nikname, telephone);
                this->contacts[0] = this->contacts[1];
                this->contacts[1] = this->contacts[2];
                this->contacts[2] = this->contacts[3];
                this->contacts[3] = this->contacts[4];
                this->contacts[4] = this->contacts[5];
                this->contacts[5] = this->contacts[6];
                this->contacts[6] = this->contacts[7];
                this->contacts[7] = contact;
            }
            else
            {
                contact.add(this->i, first_name, last_name, nikname, telephone);
                this->contacts[i] = contact;
                this->i++;
            }
        }
        void	search(void)
        {
            int i = 0;
            std::string index;

            std::cout << "     Index" << " | " << "first name" << " | " << " last name" << " | " << "  Nickname" << std::endl;
            while (i < this->i)
            {
                this->contacts[i].show_all();
                i++;
            }
            std::cout << "Choose a index:" << std::endl;
            std::cin >> index;
            while(index.length() > 1 || !(index.at(0) >= '0' && index.at(0) <= '7'))
            {
                std::cout << "Choose a valid index:" << std::endl;
                std::cin >> index;
            }
            if (index.at(0) - '0' < this->i)
                this->contacts[index.at(0) - '0'].data();
            else
                std::cout << "The index dosen't exist" << std::endl;
        }
};

#endif