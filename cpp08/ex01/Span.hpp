#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>

class Span {
	public:
		Span(const unsigned int n);
		Span(const Span &src);
		virtual ~Span();

		Span &operator=(const Span &src);

		void addNumber(const int n);
		int shortestSpan();
		int longestSpan();

		void	printData(std::ostream &o, const unsigned int max = 10) const;
		template<typename T> void	fillRange(typename T::iterator begin, typename T::iterator end);

		class aleradyFull : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Span: data is full";
				}
		};

		class notEnoughNum : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "Span: not enough numbers";
				}
		};

	private:
		Span();
		unsigned int _n;
		unsigned int _stored;
		std::vector<int> _data;
};

std::ostream	&operator<<(std::ostream &o, const Span &span);

template<typename T> void	Span::fillRange(typename T::iterator begin, typename T::iterator end)
{
	typename T::iterator	it;

	it = begin;
	while (it != end)
	{
		addNumber(*it);
		it++;
	}
}

#endif
