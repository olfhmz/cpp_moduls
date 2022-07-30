#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCatDog.hpp"

int main() {
	const Animal* meta = new Animal();
	const WrongAnimal *wrong = new WrongAnimal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal *k = new WrongCat();
	const WrongCat *l = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	// wrong animals tests
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	wrong->makeSound();
	l->makeSound();

	delete meta;
	delete wrong;
	delete j;
	delete i;
	delete k;
	delete l;

	return 0;
}
