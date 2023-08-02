#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const FragTrap &src);
        FragTrap(const std::string name);
        ~FragTrap();

	    FragTrap	&operator=( const FragTrap &other );

        void highFivesGuys(void);
        void display(std::ostream& stream) const;
};

std::ostream& operator<<(std::ostream& stream, FragTrap const& fr);

#endif