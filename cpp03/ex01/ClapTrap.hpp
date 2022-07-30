#ifndef CLAP_H
# define CLAP_H

# include <iostream>

class ClapTrap {
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &src); //конструктор копирования
		~ClapTrap();

		ClapTrap &operator=(const ClapTrap &src);

		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		std::string _name;
		int _Health;	// = 10;
		int _Energy;	// = 10;
		int _Damage;	// = 0;
};

#endif
