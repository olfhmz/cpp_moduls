#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal {
	public:
		Animal();
		Animal(Animal const &src);
		Animal &operator=(const Animal &src);

//ClapTrap &operator=(const ClapTrap &src);

		virtual ~Animal();
		virtual void makeSound() const;
		std::string getType() const;
		
	protected:
		std::string _type;
};

#endif
