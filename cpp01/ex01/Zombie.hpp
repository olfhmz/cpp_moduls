#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie {
	public:
		Zombie(std::string); //конструктор
		Zombie(); //перегрузка констуктора
		~Zombie(); //деструктор

		void setName(std::string name);
		void announce();

	private:
		std::string _name;
};

 Zombie *zombieHorde(int N, std::string name);

#endif
