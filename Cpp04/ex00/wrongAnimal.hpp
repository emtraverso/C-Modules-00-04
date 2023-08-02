#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{

public:

	WrongAnimal();
	WrongAnimal( const WrongAnimal &src );
	~WrongAnimal();

	WrongAnimal	&operator=(const WrongAnimal &src);

	void	makeSound() const ;
	const std::string	&getType() const ;

protected:

	std::string type;

private:

};

std::ostream	&operator<<( std::ostream &ostream, const WrongAnimal &instance );

#endif