#include "sed.hpp"

int main (int ac, char **av)
{
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string line;

    if (ac != 4)
        std::cout << "Insufficente numero di parametri" << std::endl;
    std::ifstream infile (av[1]);
    if (!infile)
        std::cout << "Error opening the file" << std::endl;
    
    std::ofstream outfile(av[1] + std::string(".replace"));
    while (std::getline(infile, line))
    {
        size_t pos = 0;
        pos = line.find(s1, pos);
        while (pos != std::string::npos)
        {
            line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1, pos);
        }
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();
    return(0);
}