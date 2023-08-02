#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
        
    private:
        void (Harl::*debug_ptr)(void) = &Harl::debug;
        void (Harl::*info_ptr)(void) = &Harl::info;
        void (Harl::*warning_ptr)(void) = &Harl::warning;
        void (Harl::*error_ptr)(void) = &Harl::error;
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif