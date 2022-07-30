#ifndef INTERN_H
# define INTERN_H

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern &src);
		Intern &operator=(const Intern &src);
		~Intern();

		AForm *makeForm(std::string formName, std::string target) const;

	private:
		typedef struct	s_form
		{
			std::string	name;
			AForm *(Intern::*func)(std::string) const;
		}	t_form;

		AForm *makePresidentialPardon(std::string target) const;
		AForm *makeRobotomyRequest(std::string target) const;
		AForm *makeShrubberyCreation(std::string target) const;
};

#endif
