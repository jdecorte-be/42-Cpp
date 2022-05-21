#include <iostream>
#include <fstream>
#include <string>

std::string replace(std::string line, std::string str1, std::string str2)
{
    std::size_t pos = 0;

    while(true)
    {
        pos = line.find(str1, pos + 1);
        if(pos == (size_t)-1)
            break;
        line.erase(pos, str1.length());
        line.insert(pos, str2);
        
    }
    return line;
}

int main(int ac, char **argv)
{

    if(ac != 4)
    {
        std::cerr << "Usage : ./replace <filename> <string_to_replace> <replacement>" << std::endl;
        return 1;
    }
    std::string filename(argv[1]);
    std::string str1(argv[2]);
    std::string str2(argv[3]);

    std::ifstream infile(filename);
    if(!infile)
    {
        std::cerr << "File dont exist: " << filename << std::endl;
        return 1;
    }
    std::ofstream outfile(filename + ".replace");
    if(!outfile)
    {
        std::cerr << "File could not create: " << filename + ".replace" << std::endl;
        return 1;
    }
    std::string line;
    std::string toadd;
    for(int i = 0; getline(infile, line); i++)
    {
        outfile << replace(line, str1, str2);
        if(infile.eof() == 0)
            outfile << "\n";
    }
}