
#include "tool.hpp"


int cheak_error(char **tab)
{
    int i = 0;
    while (i < 4) 
    {
        if(tab[i][0] == '\0')
            return 0;
        i++;
    }
    return 1;
}

std::string core(std::string old, std::string news, std::string line)
{

    size_t index = line.find(old);

    if (index != std::string::npos) 
    {
        line.erase(index, old.length());
        line.insert(index, news);
    }
    return line;
}


