#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include "Contact.class.hpp"
# include <string>
#include <iomanip>
#include <iostream>
/*
Constructor:
int _index, 
std::string _first_name, 
std::string _last_name, 
std::string _nickname, 
int         _phone_number
*/
class Contact {

    private:
    int    _index;
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _dark_secret;

    public:
    Contact();
    ~Contact(void);
    // getters

    void    add(
        int         _index,
        std::string _first_name,
        std::string _last_name,
        std::string _nickname,
        std::string _phone_number,
        std::string _dark_secret)
    {
        set_index(_index);
        set_first_name(_first_name);
        set_last_name(_last_name);
        set_nickname(_nickname);
        set_phone_number(_phone_number);
        set_dark_secret(_dark_secret);
        return;
    };
    int         get_index(void)
    {
        return (this->_index);
    };
    std::string get_phone_number(void)
    {
        return (this->_phone_number);
    };
    std::string get_first_name(void)
    {
        return (this->_first_name);
    };
    std::string get_last_name(void)
    {
        return (this->_last_name);
    };
    std::string get_nickname(void)
    {
        return (this->_nickname);
    };
    std::string get_dark_secret(void)
    {
        return (this->_dark_secret);
    };
    std::string get_limit(std::string str)
    {
        std::string res;
        int i;
        // std::cout << "el lenth es" << str.length() << std::endl;
        if (str.length() < 10)
        {
            i = str.length();
            while(i++ < 10)
                res.push_back(' ');
            res.append(str);
            return(res);
        }
        else if(str.length() > 10)
        {
            res = str.substr(0, 9);
            res.push_back('.');
            return(res);
        }
        return(str);
    }
    // setters
    void set_index(int _index)
    {
        this->_index = _index;
    };
    void set_phone_number(std::string _phone_number)
    {
        this->_phone_number = _phone_number;
    };
    void set_first_name(std::string _first_name)
    {
        this->_first_name = _first_name;
    };
    void set_last_name(std::string _last_name)
    {
        this->_last_name = _last_name;
    };
    void set_nickname(std::string _nickname)
    {
        this->_nickname = _nickname;
    };
    void set_dark_secret(std::string _dark_secret)
    {
        this->_dark_secret = _dark_secret;
    };

    //print index, first name, last name and nickname
    void show_all(void)
    {
        std::cout << "         " << get_index() << " | " << get_limit(get_first_name()) << " | " << get_limit(get_last_name()) << " | " << get_limit(get_nickname()) << std::endl;
    };
    int is_number(std::string str)
    {
        std::size_t i = 0;

        while(str.length() > i)
        {
            if (str.at(i) >= '0' && str.at(i) <= '9')
                i++;
            else
                return (0);
        }
        return (1);
    };
    void data(void)
    {
        std::cout << "Index: " << get_index() << std::endl
                  << "First name: " << get_first_name() << std::endl 
                  << "Last name: " << get_last_name() << std::endl 
                  << "Nickname: " << get_nickname() << std::endl
                  << "Phone Number: " << get_phone_number() << std::endl
                  << "Darkest secret: " << get_dark_secret() << std::endl;
    };
};

#endif