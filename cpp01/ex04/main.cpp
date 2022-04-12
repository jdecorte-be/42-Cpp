#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void replace(std::ofstream &fd, std::string line, std::string str1, std::string str2)
{
    std::vector<int> tab;
    std::size_t pos = 0;

    while(true)
    {
        pos = line.find(str1);
        if(pos == (size_t)-1)
            break;
        line.erase(pos, str1.length());
        tab.push_back(pos);
    }
    for(int i = tab.size() - 1; i != -1; i--)
        line.insert(tab.at(i), str2);
    fd << line;
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
    {
        replace(fd2, line, str1, str2);
        if(fd.eof() == 0)
            fd2 << "\n";
    }
}