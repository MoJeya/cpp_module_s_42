#ifndef REWRITE_HPP
#define REWRITE_HPP

#include <iostream>
#include <fstream>
#include <string>

class sed
{
    private:
        
    public:
        static void replace(std::string const &filePath,  char *s1, char *s2);
        void copyContent();


};

#endif
