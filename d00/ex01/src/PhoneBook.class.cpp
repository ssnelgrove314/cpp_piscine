#include "../include/phonebook.hpp"
#include "../include/PhoneBook.class.hpp"

PhoneBook::PhoneBook() {};
PhoneBook::~PhoneBook() {};

std::string PhoneBook::getFirstName() {
    return firstName;
}

std::string PhoneBook::getLastName() {
    return lastName;
}

std::string PhoneBook::getNickName() {
    return nickName;
}

std::string PhoneBook::getLogin() {
    return login;
}

std::string PhoneBook::getPostalAddress() {
    return postalAddress;
}

std::string PhoneBook::getEmailAddress() {
    return emailAddress;
}

std::string PhoneBook::getPhoneNumber() {
    return phoneNumber;
}

std::string PhoneBook::getBirthDate() {
    return birthDate;
}

std::string PhoneBook::getFavouriteMeal() {
    return favouriteMeal;
}

std::string PhoneBook::getUnderwearColour() {
    return underwearColour;
}

std::string PhoneBook::getDarkestSecret() {
    return darkestSecret;
}

std::string PhoneBook::toString()
{
    std::stringstream ss;

    ss << getFirstName() << " " <<
        getLastName() << " " <<
        getNickName() << " " <<
        getLogin() << " " <<
        getPostalAddress() << " " <<
        getEmailAddress() << " " <<
        getPhoneNumber() << " " <<
        getBirthDate() << " " <<
        getFavouriteMeal() << " " <<
        getUnderwearColour() << " " <<
        getDarkestSecret();
    return (ss.str());
}

void PhoneBook::addContact()
{
    std::cout << "First Name\n";
    getline(std::cin, firstName);
    std::cout << "Last Name\n";
    getline(std::cin, lastName);
    std::cout << "nickName\n";
    getline(std::cin, nickName);
    std::cout << "login\n";
    getline(std::cin, login);
    std::cout << "Postal address\n";
    getline(std::cin, postalAddress);
    std::cout << "email Address\n";
    getline(std::cin, emailAddress);
    std::cout << "phoneNumber\n";
    getline(std::cin, phoneNumber);
    std::cout << "birth day\n";
    getline(std::cin, birthDate);
    std::cout << "what do you eat?\n";
    getline(std::cin, favouriteMeal);
    std::cout << "I want to know whats under your clothes ;)\n";
    getline(std::cin, underwearColour);
    std::cout << "I want to know what is your darkest secret\n";
    getline(std::cin, darkestSecret);
    if (std::cin.eof())
    {
        std::cout << "you fail";
        return;
    }
}