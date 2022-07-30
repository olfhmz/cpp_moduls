#ifndef BURE_H
# define BURE_H

# include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat {
	private:
		const std::string _name;
		int	_grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &bureaucrat);
		virtual ~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &bureaucrat);

		const std::string getName(void) const;
		int getGrade(void) const;
		void upGrade(void);
		void downGrade(void);

		//new mem
		void signForm(AForm &AForm) const;

		//exception

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat::exception : Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat::exception : Grade is too low");
				}
		};
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat);

#endif
