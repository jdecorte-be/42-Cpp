#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	private:
		int         index;
		std::string firstname;
		std::string phonenumber;
		std::string lastname;
		std::string nickname;
		std::string secret;
	public:
		void setIndex(const int &index);
		void setFirstname(const std::string &firstname);
		void setPhonenumber(const std::string &phonenumber);
		void setLastname(const std::string &lastname);
		void setNickname(const std::string &nickname);
		void setSecret(const std::string &secret);
		const int &getIndex();
		const std::string &getFirstname();
		const std::string &getPhonenumber();
		const std::string &getLastname();
		const std::string &getNickname();
		const std::string &getSecret(); 

		Contact();
		~Contact();
		void show_contact();
		void add_info(int index);
};

#endif