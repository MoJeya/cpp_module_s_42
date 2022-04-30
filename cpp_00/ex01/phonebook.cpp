#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "Pleas Choose between" << '\n';
    std::cout << "Add contact" << '\n';
    std::cout << "Search contact" << '\n';
    std::cout << "exit...." << '\n';
}

void PhoneBook::add(int index)
{
    std::string name;
    std::string num;

    std::cout << "\nEnter the Name\n";
    getline(std::cin, name);
    std::cout << "Enter the Number" << '\n';
    getline(std::cin, num);
    if (index == 7)
    {
        std::cout << "The list is Full!\n";
        std::cout << "the first entry will be deleted!\n";
        std::cout << this->contacts[0].GetName() << " will be Deleted!" << '\n';
        index = 0;
    }
    this->contacts[index].setName(name);
    this->contacts[index].setNumber(num);
    std::cout << "\nContact is saved" << '\n' << "\nADD\nSEARCH\nEXIT\n";
    return ;
}

void PhoneBook::search()
{
    int i;
    std::string name;

    std::cout << '\n' << "Enter the Name!: ";
    getline(std::cin, name);
    i = 0;
    while (i < 8)
    {
        if (name == this->contacts[i].GetName())
        {
            std::cout << "NAME: "<< this->contacts[i].GetName() << '\n';
            std::cout << "NUMBER: "<< this->contacts[i].GetNumber() << '\n';
            std::cout << '\n' << "\nADD\nSEARCH\nEXIT\n";
            return ;
        }
        i++;
    }
    std::cout << "Nothing to be found!" << '\n';
    std::cout << '\n' << "\nADD\nSEARCH\nEXIT\n";
    // std::cin./ignore();
}
