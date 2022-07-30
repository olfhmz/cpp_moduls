#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
		: AForm("Present Pardon", 25, 5) {
			_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) 
		: AForm(src) {
			*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
	if (this == &src)
		return *this;
	_target = src._target;
	return *this;
}

void PresidentialPardonForm::Execute(const Bureaucrat &executor) const {
	canExecuteWithException(executor);

	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
