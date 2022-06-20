#include "rewrite.hpp"

reWrite::reWrite(std::string &filePath, std::string &s1, std::string &s2) : _filePath(filePath), _s1(s1), _s2(s2) {}

/**
 * 1. finde pos von string
 * 2. 
*/

void reWrite::copyContent()
{
    std::string line;
    int len = this->_s1.length();
    std::ifstream InFile(this->_filePath);
    std::fstream OutFile("copy.txt");
    int i = 0;
    if (InFile && OutFile)
    {
        while (std::getline(InFile, line))
        {

            std::string::size_type pos = 0;
            std::cout<<"line[" << i << "]: " << line << '\n';
            // while (true)
            // {
                pos = line.find(this->_s1);
                if (pos != std::string::npos)//falls es nicht groesser als npos ist somit ist das wort gefundee
                {
                    std::string found = line.substr(pos, len);
                    line.erase(pos, found.length());
                    std::cout << found << '\n';
                    line.insert(pos,this->_s2);
                    std::cout << "the replaced line: " << line << '\n';
                    OutFile << line << '\n';
                    pos = 0;
                    i = 1;
                }
                else
                    break;
            // }
            if (i != 1)
                OutFile << line << '\n';
            i++;
        } 
        std::cout << "Copy finished" << '\n';
    }
    else
        std::cout << "unable to open file"<< '\n';
    InFile.close();
    OutFile.close();
    
}
