#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon &weapon);
		void attack();
	private:
		std::string _name;
		Weapon &_weapon;
};

#endif
