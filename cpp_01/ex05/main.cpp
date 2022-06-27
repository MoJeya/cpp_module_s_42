#include "Harl.hpp"

int main()
{
    Harl r;
    r.complain("info");
    std::cout << "\n";
    r.complain("error");
    return (0);
}