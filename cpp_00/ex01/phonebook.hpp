#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include <iostream>
#include "Contacts.hpp"


class PhoneBook
{
    private:
        Contact contacts[8];
        // int index;
    public:
        PhoneBook();
        void add(int index);
        void search();
};

#endif