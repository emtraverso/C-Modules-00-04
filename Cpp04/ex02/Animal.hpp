#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
    protected:
        std::string type;
    public:
        virtual ~Animal();
        virtual Animal		&operator=( const Animal &other ) = 0;
        virtual void makeSound() const = 0;
        const std::string& getType() const;
        virtual Brain* getBrain() const = 0;
}; 

std::ostream &operator<<(std::ostream &stream, const Animal &an);

#endif 