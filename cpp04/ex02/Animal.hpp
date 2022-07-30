#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include "Brain.hpp"

class Animal {
	public:
		Animal();
		Animal(Animal const &src);
		Animal &operator=(const Animal &src);

		virtual ~Animal();
		virtual void makeSound() const;
		virtual Brain *getBrain();
		std::string getType() const;
		
	protected:
		std::string _type;
};

#endif
