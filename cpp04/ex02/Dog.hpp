#ifndef DOG_H
# define DOG_H

#include "AAnimal.hpp"

class Dog : public AAnimal {
	public:
		Dog();
		Dog(const Dog &src);
		~Dog();

		Dog &operator=(const Dog &src);

		virtual void makeSound() const;

		Brain *getBrain();
		
	private:
		Brain *_brain;
};

#endif
