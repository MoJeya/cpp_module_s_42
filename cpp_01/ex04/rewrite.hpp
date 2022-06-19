#ifndef REWRITE_HPP
#define REWRITE_HPP

#include <iostream>
#include <fstream>

class reWrite
{
    private:
        std::string _filePath;
        std::string _s1;
        std::string _s2;
    public:
        reWrite(std::string &filePath, std::string &s1, std::string &s2);
        void copyContent();


};

#endif
