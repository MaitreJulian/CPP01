
#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    std::ifstream file;
    std::ofstream output;
    std::string line;
    
    if (argc < 4 || argc >= 5)
    {
        std::cout << "Not good amount of parameters!" << std::endl;
        return 1;
    }
    if (!argv[2] || !argv[2][0])
    {
        std::cout << "s1 can't be empty" << std::endl;
        return 1;
    }
    std::string file_name = argv[1];
    file.open(argv[1]);
    if (!file.is_open())
    {
        std::cout << "Error open" << std::endl;
        return 1;
    }
    output.open(file_name+=".replace");
        if (!file.is_open())
    {
        std::cout << "Error creating " << argv[1] << ".replace" << std::endl;
        return 1;
    }
    while(std::getline(file, line))
    {
        if (line.find(argv[2]))
        output << line;
    }
    std::cout << "Tout fonctionne" << std::endl;
    return 0;

    
}
