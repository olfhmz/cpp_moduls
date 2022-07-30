#ifndef P_H
# define P_H

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

		virtual void Execute(Bureaucrat const &executor) const;

	private:
		std::string _target;
};

#endif
