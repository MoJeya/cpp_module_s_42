#include <iostream>

int main (int argc, char *argv[])
{
    std::string name = "HI THIS IS BRAIN";
    std::string *stringPTR = &name;
    std::string &stringREF = name;

    std::cout << "\033[32mMEMORY ADDRESS OF THE STRING VARIABLE:\t\033[0m" << &name << '\n';
    std::cout << "\033[32mThe memory address held by stringPTR:\t\033[0m" << &stringPTR << '\n';
    std::cout << "\033[32mThe memory address held by stringREF:\t\033[0m" << &stringREF << '\n';

    std::cout << "\033[34mThe value of the string variable\t\033[0m" << name << '\n';
    std::cout << "\033[34mThe value pointed to by stringPTR\t\033[0m" << *stringPTR << '\n';
    std::cout << "\033[34mThe value pointed to by stringREF\t\033[0m" << stringREF << '\n';

    (void)argc;
    (void)argv;
    return (0);
}