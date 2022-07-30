#include "Harl.hpp"

int main(int ac, char **av) {
	Harl man;

	if (ac == 2)
		man.comlain(av[1]);
	else
		std::cout << "Error args" << std::endl;

	return 0;
}
