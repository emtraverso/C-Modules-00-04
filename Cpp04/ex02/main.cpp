#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define NOA 10

int	main( void )
{
	Animal	*animals[NOA];
	Brain	*brain;

	for (int i = 0; i < NOA; i++)
	{
		if (i < NOA / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}

	brain = animals[7]->getBrain();
	brain->ideas[0] = "I'm hungry";
	brain->ideas[1] = "That's a strange idea I'm having";
	brain->ideas[2] = "Ball!!!!!";
	brain->ideas[3] = "Squirrel!!!!!";
	std::cout << animals[7]->getBrain()->ideas[0] << std::endl;
	std::cout << animals[7]->getBrain()->ideas[1] << std::endl;

	for (int i = 0; i < NOA; i++)
		delete animals[i];
}