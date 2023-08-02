#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	public:
		Contact();
		~Contact();
		void setContact(void);
		void getSummary(void);
		void getContact(void);
		void charCut(std::string str);
		int	num;
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
};

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void selector();
		void addContact();
		void searchContact();
	private:
		int _index;
		Contact _contacts[8];
};
#endif