#ifndef FIX_H
# define FIX_H

# include <iostream>

class Fixed {
	private:
		int _value;
		static const int _afterComma = 8;
	public:
		Fixed(void);
		Fixed(Fixed &a);
		~Fixed();
		Fixed &operator =(Fixed &other);

		int getRawBits(void);
		void setRawBits(int const raw);
};

#endif
