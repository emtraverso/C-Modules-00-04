#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "wrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:

	WrongCat( void );
	WrongCat( const WrongCat &src );
	~WrongCat( void );
	void	makeSound( void ) const ;

private:

};

#endif