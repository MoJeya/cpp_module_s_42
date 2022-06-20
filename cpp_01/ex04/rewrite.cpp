#include "rewrite.hpp"

void sed::replace(std::string const &filePath, char *s1, char *s2)
{
    std::string line;
    int len = strlen(s1);

    std::ifstream InFile(filePath);
    std::ofstream OutFile(filePath + ".replace" , std::ios::trunc);
    if (InFile && OutFile)
    {
        std::string::size_type pos = 0;
        while (std::getline(InFile, line))
        {
            pos = line.find(s1);
            while (pos != std::string::npos)
            {
                line.erase(pos, len);
                line.insert(pos,s2);
                pos = line.find(s1, pos, len);
            }
            OutFile << line << '\n';
        }
        std::cout << "Copy finished" << '\n';
    }
    else
        std::cout << "unable to open file"<< '\n';
    InFile.close();
    OutFile.close();
}
