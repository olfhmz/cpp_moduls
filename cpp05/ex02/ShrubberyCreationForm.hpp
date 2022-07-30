#ifndef SH_H
# define SH_H

# include "AForm.hpp"
# include <fstream>
# include <iostream>

class ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);

		virtual void Execute(Bureaucrat const &executor) const;

	private:
		std::string _target;
};

#endif
