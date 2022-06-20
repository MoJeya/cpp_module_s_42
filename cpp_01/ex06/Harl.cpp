#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[DEBUG]" << '\n';
    std::cout << "I love having extra bacon for" <<
        "my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << '\n';
    std::cout << '\n' << "[INFO]" << '\n';
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
    << "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
    << '\n';
    std::cout << '\n' << "[WARNING]" << '\n';
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"<<'\n'
        <<"years whereas you started working here since last month" <<'\n';
    std::cout << '\n' << "[ERROR]" << '\n';
    std::cout << "This is unacceptable! I want to speak to the manager now."<< '\n';

}

void Harl::warning(void)
{
    std::cout << '\n' << "[WARNING]" << '\n';
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for\nyears whereas you started working here since last month" <<
        '\n';
    std::cout << '\n' << "[ERROR]" << '\n';
    std::cout << "This is unacceptable! I want to speak to the manager now."<< '\n';
}

void Harl::info(void)
{
    std::cout << '\n' << "[INFO]" << '\n';
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
    << "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
    << '\n';
    std::cout << '\n' << "[WARNING]" << '\n';
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"<<'\n'
        <<"years whereas you started working here since last month" <<'\n';
    std::cout << '\n' << "[ERROR]" << '\n';
    std::cout << "This is unacceptable! I want to speak to the manager now."<< '\n';
}

void Harl::error(void)
{
    std::cout << '\n' << "[ERROR]" << '\n';
    std::cout << "This is unacceptable! I want to speak to the manager now."
    << '\n';
}

enum m 
{
    debug,
    info,
    warning,
    error
};

void Harl::complain(std::string level)
{
    int option = 0;
    const char *message[4]
        = {"debug", "info", "warning", "error"};
    
    while (level != message[option])
        option++;
    
   switch (option)
    {
        case 0:
            debug();
            break;
        case 1:
            info();
            break;
        case 2:
            warning();
            break;
        case 3:
            error();
            break;
        default:
            std::cout << "Nothing to complain\n";
            break;
    }
}