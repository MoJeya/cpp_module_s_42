#include <iostream>

int main(int argc, char *argv[])
{
    int i;
    char out;

    i = 1;
    out = 0;
    if (argc == 1)
        return (0);
    else
    {
        while (argv[i])
        {
            int j;

            j = 0;
            while (argv[i][j] != '\0')
            {
                if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
                    out = argv[i][j] - 32;
                else
                    out = argv[i][j];
                std::cout << out;
                j++;
            }
            if (argv[i+1] != NULL)
                std::cout << " ";
            i++;
        }
    }
    return (0);
}