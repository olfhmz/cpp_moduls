#ifndef CONVERT_H
# define CONVERT_H

# include <iostream>
# include <iomanpip>
# include <string>
# include <limits>

# define CHAR 1
# define FLOAT 2
# define DOUBLE 3
# define INT 4
# define INVALID 5
# define PSEUDOLIT 6

class Convert {
	private:
		std::string def; //defolt string
		int i_arg;
		double d_arg;
		char c_arg;
		float f_arg;
		int _type;
		bool isWrong;

	public:

		Convert();
	//	Convert(const std::string &def);
		~Convert();

		Convert(const Convert &src);
		Convert &operator=(const Convert &src);

		void getIType() const; //getters сразу печатают
		void getDType() const;
		void getCType() const;
		void getFType() const;

		void setType(int type);
		int getType() const;

		const std::string &getDef() const;
		void setDef(const std::string &def);
};

#endif
