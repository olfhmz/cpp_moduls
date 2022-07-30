#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
		: AForm("PresidentialPardon", 145, 137) {
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src) {
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
	if (this == &src)
		return *this;
	_target = src._target;
	return *this;
}

void ShrubberyCreationForm::Execute(const Bureaucrat &executor) const {
	canExecuteWithException(executor);

	std::ofstream	file;
	
	file.open((_target + "_shrubbery").c_str());
	if (file.good() == false)
		throw FileOpeningFail();
	file << "              v .   ._, |_  .," << std::endl;
    file << "       \'-._\\/  .  \\ /    |/_" << std::endl;
    file << "           \\\\  _\\, y | \\//" << std::endl;
    file << "     _\\_.___\\\\, \\\\/ -.\\||" << std::endl;
    file << "       \'7-,--.\'._||  / / ," << std::endl;
    file << "       /\'     \'-.\'./ / |/_.\'" << std::endl;
    file << "                 |    |//" << std::endl;
    file << "                 |_    /   " << _target << std::endl;
    file << "                 |-   |" << std::endl;
    file << "                 |   =|" << std::endl;
    file << "                 |    |" << std::endl;
	file << "----------------/ ,  . \\--------._" << std::endl;
	file.close();
}
