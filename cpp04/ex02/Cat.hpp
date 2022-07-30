#ifndef CAT_H
# define CAT_H

#include "AAnimal.hpp"

class Cat : public AAnimal {
	public:
		Cat();
		Cat(const Cat &src);
		~Cat();

		Cat &operator=(Cat const &src);

		virtual void makeSound() const;

		Brain *getBrain();
		
	private:
		Brain *_brain;
};

#endif
