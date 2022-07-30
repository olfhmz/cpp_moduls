#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"
# include <iostream>

class HumanB {
	public:
		HumanB(std::string name);

		void setWeapon(Weapon &weapon);
		void attack();
	private:
		std::string _name;
		Weapon *_weapon;
};

#endif