#include "rewrite.hpp"

reWrite::reWrite(std::string &filePath, std::string &s1, std::string &s2) : _filePath(filePath), _s1(s1), _s2(s2) {}

/**
 * 1. finde pos von string
 * 2. 
*/

void reWrite::copyContent()
{
    std::string line;
    std::ifstream InFile(this->_filePath);
    std::fstream OutFile("copy.txt");

    if (InFile && OutFile)
    {
        while (std::getline(InFile, line))
        {
            OutFile << line << '\n';
        } 
        std::cout << "Copy finished" << '\n';
    }
    else
        std::cout << "unable to open file"<< '\n';
    InFile.close();
    
    if (OutFile.is_open())
    {
        while (getline(OutFile, line))
        {
            std::string::size_type pos = line.find(this->_s1);
            if (pos != std::string::npos)
            {
                line.
            }
        }
    }
    
    OutFile.close();
    

    // if (file.good())
    // {
    //     while (std::getline(file,line))
    //     {
    //         std::cout << line << '\n';
    //     }
    //     file << this->_s2;
    // }
    // else
    // file.close();
}
