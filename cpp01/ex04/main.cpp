#include <iostream>
#include <fstream>
#include <string>

void replace(std::ofstream &fd, std::string line, std::string str1, std::string str2)
{
    std::size_t pos = line.find(str1);
    if(pos != (size_t)-1)
    {
        line.erase(pos, str1.length());
        line.insert(pos, str2);
    }
    fd << line;
    // ! to fix
    if(line.eof() == 1)
        fd << std::endl;
}

int main(int ac, char **argv)
{

    if(ac != 4)
        return -1;
    std::string filename(argv[1]);
    std::string str1(argv[2]);
    std::string str2(argv[3]);

    std::ifstream fd(filename);
    std::ofstream fd2(filename + ".replace");

    std::string line;
    std::string toadd;
    for(int i = 0; getline(fd, line); i++)
        replace(fd2, line, str1, str2);
}