#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl h;
    if (ac < 1)
        std::cout << "Inserisci un parametro";
    else if (ac > 2)
        std::cout << "Troppi parametri!";
    else if (ac == 2)
        {
            std::string levels[4] = {
            "DEBUG",
            "INFO",
            "WARNING",
            "ERROR"
            };
        int i = 0;
        while (i < 4 && levels[i] != av[1])
            i++;

        switch(i) {
            case 0:
                std::cout << "[ DEBUG ]" << std::endl;
                h.complain("DEBUG");
                std::cout << std::endl;
            case 1:
                std::cout << "[ INFO ]" << std::endl;
                h.complain("INFO");
                std::cout << std::endl;
            case 2:
                std::cout << "[ WARNING ]" << std::endl;
                h.complain("WARNING");
                std::cout << std::endl;
            case 3:
                std::cout << "[ ERROR ]" << std::endl;
                h.complain("ERROR");
                std::cout << std::endl;
                break;
            default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
                break;
        }
}
}
