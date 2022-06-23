#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{

}

void PhoneBook::printOptions(void)
{
    std::cout << "Pleas Choose between" << '\n';
    std::cout << "\033[32mADD"<< std::setw(18) << "CONTACT\n\033[0m";
    std::cout << "\033[33mSEARCH" << std::setw(15) << "CONTACT\n\033[0m";
    std::cout << "\033[31mEXIT" << std::setw(19) << "PHONEBOOK\n\033[0m";
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Destructed\n";
    return ;
}

void PhoneBook::add(int index)
{
    std::string name;
    std::string lastName;
    std::string nickName;
    std::string num;
    std::string Ds;

    std::cout << "\033[35m\nEnter the First Name: \033[0m";
    getline(std::cin, name);
    std::cout << "\033[35mEnter the Last Name: \033[0m";
    getline(std::cin, lastName);
    std::cout << "\033[35mEnter the Nick-Name: \033[0m";
    getline(std::cin, nickName);
    std::cout << "\033[35mEnter the Number: \033[0m";
    getline(std::cin, num);
    int i = 0;
    while(i < static_cast<int>(num.length()))
    {
        if (std::isdigit(num.at(i)))
            i++;
        else
            break;
    }
    if (i != static_cast<int>(num.length())){
        std::cout<< "\033[31mNOT A NUMBER\033[0m "<<std::endl;
        num.clear();
    }
    std::cout << "\033[35mEnter youre secret: \033[0m";
    getline(std::cin, Ds);
    if (!name.empty() && !lastName.empty() && !nickName.empty() && !num.empty() && !Ds.empty())
    {
        if (index == 8)
        {
            std::cout << '\n' << "The list is Full!\n";
            std::cout << "the first entry will be deleted!\n";
            std::cout << this->contacts[0].GetName() << " will be Deleted!" << '\n';
            index = 0;
        }
        this->contacts[index].setName(name);
        this->contacts[index].setLastName(lastName);
        this->contacts[index].setNickName(nickName);
        this->contacts[index].setNumber(num);
        this->contacts[index].setDarkestSecret(Ds);
        this->contacts[index].setSearchID(index);
        this->display();
        std::cout << "\nContact is saved" << '\n';
    }
    else
    {
        std::cout << "\n\033[31mEMPTY INPUT FIELDE!\n\033[0m";
    }
    std::cout << "\nPleas Choose between" << '\n';
    std::cout << "\033[32mADD"<< std::setw(18) << "CONTACT\n\033[0m";
    std::cout << "\033[33mSEARCH" << std::setw(15) << "CONTACT\n\033[0m";
    std::cout << "\033[31mEXIT" << std::setw(19) << "PHONEBOOK\n\033[0m";
    std::cout << "\033[34m\nOPTION: \033[0m";
    return ;
}

void PhoneBook::search()
{
    int i;
    std::string index;

    std::cout << '\n' << "\033[35mEnter the Index: \033[0m";
    getline(std::cin, index);
    i = 0;
    while (i < 8 && !this->contacts[0].GetName().empty())
    {
        if (std::stoi(index) == this->contacts[i].GetSearchID())
        {
            std::cout <<"\033[1m\033[33mFIRST NAME:\033[0m\t"<< std::setw(10) << this->contacts[i].GetName() << std::endl;
            std::cout <<"\033[1m\033[33mLAST NAME:\033[0m\t" << std::setw(10) << this->contacts[i].GetLastName() << std::endl;
            std::cout <<"\033[1m\033[33mNICK NAME:\033[0m\t" << std::setw(10) << this->contacts[i].GetNickName() << std::endl;
            std::cout <<"\033[1m\033[33mNUMBER:\033[0m\t" << std::setw(10) << this->contacts[i].GetNumber() << std::endl;
            std::cout <<"\033[1m\033[33mDARKEST SECRET:\033[0m" << std::setw(10) << this->contacts[i].GetDS() << std::endl;
            std::cout << "\nPleas Choose between" << '\n';
            std::cout << "\033[32mADD"<< std::setw(18) << "CONTACT\n\033[0m";
            std::cout << "\033[33mSEARCH" << std::setw(15) << "CONTACT\n\033[0m";
            std::cout << "\033[31mEXIT" << std::setw(19) << "PHONEBOOK\n\033[0m";
            return ;
        }
        i++;
    }
    std::cout << "Nothing to be found!" << '\n';
    std::cout << "\nPleas Choose between" << '\n';
    std::cout << "\033[32mADD"<< std::setw(18) << "CONTACT\n\033[0m";
    std::cout << "\033[33mSEARCH" << std::setw(15) << "CONTACT\n\033[0m";
    std::cout << "\033[31mEXIT" << std::setw(19) << "PHONEBOOK\n\033[0m";
}

void PhoneBook::display(void)
{
    int i;

    i = 0;
    std::cout << "BOOK:\n";
    std::cout << std::setw(10) << "INDEX" << "|";
    std::cout << std::setw(10) << "FIRST NAME" << "|";
    std::cout << std::setw(10) << "LAST NAME" << "|";
    std::cout << std::setw(10) << "NICK NAME" << "|\n";
    while(i < 8)
    {
        std::cout << i << std::right <<std::setw(10) << "|";
        (this->contacts[i].GetName().length() >= 10) ? std::cout << std::setw(10) << std::right <<this->contacts[i].GetName().substr(0, 9) + "." << "|"
            : std::cout << std::setw(10) << std::right << this->contacts[i].GetName() << "|";
        (this->contacts[i].GetLastName().length() >= 10) ? std::cout << std::setw(10) << std::right << this->contacts[i].GetLastName().substr(0, 9) + "." << "|"
            : std::cout << std::setw(10) << std::right << this->contacts[i].GetLastName() << "|";
        (this->contacts[i].GetNickName().length() >= 10) ? std::cout << std::setw(10) << std::right << this->contacts[i].GetNickName().substr(0, 9) + "." << "|"
            : std::cout << std::setw(10) << std::right << this->contacts[i].GetNickName() << "|\n";
        i++;
    }
    return ;
}

int PhoneBook::checkInput(int index)
{
    if (this->contacts[index].GetName().empty())
        return(0);
    return(1);
}
