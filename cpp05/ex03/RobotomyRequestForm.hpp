#ifndef R_H
# define R_H

# include "AForm.hpp"
# include <ctime>
# include <cstdlib>

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

		virtual void Execute(Bureaucrat const &executor) const;

	private:
		std::string _target;
};

#endif
