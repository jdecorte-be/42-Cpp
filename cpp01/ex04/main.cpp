#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **argv)
{

    if(ac != 4)
        return -1;
    std::string filename(argv[1]);
    std::ifstream fd;
    std::ifstream fd2;
    fd.open(filename);
    fd2.open(filename + ".replace");
    std::string line;
    for(int i = 0; getline(fd, line); i++)
    {
        for(int j = 0; line[j]; j++)
            if(line[j] == argv[2])
                line[j] = 
    }
}