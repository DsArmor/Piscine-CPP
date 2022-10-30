//
// Created by argoc on 10/30/22.
//

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Wrong arguments number" << std::endl;
        return 1;
    }
    std::string fileName(argv[1]);
    std::ifstream ifs(fileName);
    if(ifs.fail())
    {
        std::cerr << "Error when try open " << fileName << std::endl;
        return 1;
    }
    std::ofstream ofs(fileName + ".replace");
    std::string oldStr(argv[2]);
    std::string newStr(argv[3]);
    std::string line;
    size_t index;

    while(getline(ifs, line))
    {
        while((index = line.find(oldStr)) != std::string::npos)
        {
            ofs << line.substr(0, index);
            ofs << newStr;
            line.erase(0, index + oldStr.length());
        }
        ofs << line << "\n";
    }
    ifs.close();
    ofs.close();
    std::cout << "Replace successful!" << std::endl;
    return 0;
}