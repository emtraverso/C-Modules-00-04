#include "phonebook.hpp"

Contact::Contact()
{
	this->num = 0;
}

Contact::~Contact()
{
	
}

PhoneBook::PhoneBook()
{
	this->_index = 0;

}
PhoneBook::~PhoneBook()
{
	
}

void	PhoneBook::selector()
{
	std::string command;
	int	i = 0;
	while (1)
	{
		if (i == 0)
			std::cout << "Write one of these three commands: ADD, SEARCH, EXIT" <<std::endl;
		std::cin >> command;
		if (("ADD" == command))
		{
			i = 0;
			this->addContact();
		}
		else if ("SEARCH" == command)
		{
			i  = 0;
			this->searchContact();
		}
		else if ("EXIT" == command)
			exit(0);
		else
		{
			i = 1;
			std::cout << "Accepted commands: ADD, SEARCH, EXIT" <<std::endl;
		}
	}
	return;
}

void Contact::charCut(std::string str)
{
    if (str.length() > 10)
    {
        std::cout << std::right << std::setw(10) << str.substr(0, 9) << ".";
    }
    else
    {
        std::cout << std::right << std::setw(10) << str;
    }
}

void	Contact::getSummary()
{
	std::cout << std::right << std::setw(10) << this->num;
	std::cout << std::right << std::setw(10) << " | ";
	this->charCut(this->_firstName);
	std::cout << std::right << std::setw(10) << " | ";
	this->charCut(this->_lastName);
	std::cout << std::right << std::setw(10) << " | ";
	this->charCut(this->_nickname);
	std::cout << std::endl;
}

void	Contact::getContact()
{
	std::cout << "First Name: ";
	std::cout << this->_firstName << std::endl;
	std::cout << "Last Name: ";
	std::cout << this->_lastName << std::endl;
	std::cout << "Nickname: ";
	std::cout << this->_nickname << std::endl;
	std::cout << "Phone Number: ";
	std::cout << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret: ";
	std::cout << this->_darkestSecret << std::endl;
}

void	Contact::setContact()
{
	std::cout << "Write Contact First Name: ";
	std::cin >> this->_firstName;
	std::cout << std::endl;
	std::cout << "Write Contact Last Name: ";
	std::cin >> this->_lastName;
	std::cout << std::endl;
	std::cout << "Write Contact Nickname: ";
	std::cin >> this->_nickname;
	std::cout << std::endl;
	std::cout << "Write Contact Phone Number: ";
	std::cin >> this->_phoneNumber;
	std::cout << std::endl;
	std::cout << "Write Contact Darkest Secret: ";
	std::cin >> this->_darkestSecret;
	std::cout << std::endl;
}

void	PhoneBook::addContact()
{
	int i;
	if (this->_index > 7)
	{
		this->_index = 0;
		i = _index;
	}
	else
		i = this->_index;
	this->_contacts[i].setContact();
	this->_contacts[i].num = i + 1;
	this->_index++;

}

void	PhoneBook::searchContact()
{
	int i = this->_index;
	int j = 0;
	if (this->_index == 0)
	{
		std::cout << "Add contact first" << std::endl;
		return;
	}
	for (int c = 1; c < 9; c++)
	{
		if (this->_contacts[c - 1].num == c)
			this->_contacts[c - 1].getSummary();	
	}
	
	std::string s;
	std::cout << "Insert index contact" << std::endl;
	while (1)
	{
		std::cin >> s;
		try
		{
			std::stoi(s);
		}
		catch(const std::invalid_argument& e)
		{
			std::cout << "Insert a number" << std::endl;
			continue;		
		}
		catch(const std::out_of_range& e)
		{
			std::cout << "Insert a number" << std::endl;
			continue;		
		}
		j = std::stoi(s);
		if ((j < 1 || j > 8 ) || this->_contacts[j - 1].num != j)
		{
			std::cout << "Wrong index number" << std::endl;
			continue;
		}
		else
			break;	
	}
	this->_contacts[j - 1].getContact();	
}