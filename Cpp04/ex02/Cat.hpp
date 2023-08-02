#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat( const Cat &src );
        virtual ~Cat();
        Cat &operator=( const Cat &src );
        virtual Animal	&operator=( const Animal &other );
        virtual void makeSound() const;
        Brain* getBrain() const;
    private:
        Brain* brain;
};

#endif