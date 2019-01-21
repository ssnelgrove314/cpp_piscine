#include "../include/phonebook.hpp"

void greeting()
{
	std::cout << "WRITE IN ME! WRITE IN ME!" << std::endl;
}

void goodbye()
{
	std::cout << std::endl << "WHY WONT YOU WRITE IN ME!" << std::endl;
}

void printListing(int n, PhoneBook pb[MAX_CONTACTS])
{
	for (int i = 0; i < n; i++)
		std::cout << i << " " << pb[i].getFirstName() << " " << pb[i].getLastName() << " " << pb[i].getNickName() << std::endl;
}

void searchBook(int i, PhoneBook pb[MAX_CONTACTS])
{
	int ind;
	printListing(i, pb);
	std::cin >> ind;
	if (std::cin.eof())
	{
		std::cerr << "Don't enter eof\n";
		return;
	}
	else if (std::cin.fail() || ind < 0 || ind >= i)
		std::cout << "You failed, try again!" << std::endl;
	else
	{
		std::cout << "The entry: " << pb[ind].toString() << std::endl;
	}
}

int main(void)
{
	int i = 0;
	PhoneBook pb[MAX_CONTACTS];
	std::string buf;

	greeting();
	while (1)
	{
		getline(std::cin, buf);
		if (buf == "EXIT" || std::cin.eof()) break;
		else if (buf == "ADD")
		{
			if (i < MAX_CONTACTS)
			{
				pb[i].addContact();
				i++;
			}
			else
				std::cout << "BOOK IS FULL" << std::endl;
		}
		else if (buf == "SEARCH")
		{
			if (i > 0)
				searchBook(i, pb);
			else
				std::cout << "Book is empty";
		}
	}
	goodbye();
}