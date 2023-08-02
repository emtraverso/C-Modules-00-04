CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = Weapon

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXEC)

main.o: main.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Weapon.o: Weapon.cpp Weapon.hpp
	$(CXX) $(CXXFLAGS) -c Weapon.cpp

HumanA.o: HumanA.cpp HumanA.hpp Weapon.hpp
	$(CXX) $(CXXFLAGS) -c HumanA.cpp

HumanB.o: HumanB.cpp HumanB.hpp Weapon.hpp
	$(CXX) $(CXXFLAGS) -c HumanB.cpp

clean:
	rm -f $(OBJ) $(EXEC)
