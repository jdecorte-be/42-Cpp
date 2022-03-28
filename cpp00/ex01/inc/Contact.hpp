#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
    private:
        std::string _phoneNumber;
        std::string _name;
        std::string _lastname;
        std::string _nickname;
        std::string _secret;
    public:
        Contact();
        ~Contact();
        void show_contact();
};

#endif