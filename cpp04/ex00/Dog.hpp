#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog &src);
		~Dog();

		Dog &operator=(const Dog &src);

		virtual void makeSound() const;
};

#endif
