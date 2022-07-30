#ifndef FRAG_H
# define FRAG_H

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap {
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		~FragTrap();

		FragTrap &operator=(const FragTrap &src);

		void highFivesGuys(void);
};

#endif
