#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal &operator=(WrongAnimal const &src);
		virtual ~WrongAnimal();

		void makeSound() const;
		std::string getType() const;

	private:

	protected:
		std::string _type;

};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &src);
		WrongCat &operator=(WrongCat const &src);
		~WrongCat();
		
		void makeSound() const;
};

#endif
