#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <string>

class Contact {
	public:
	bool IsEmpty;
	std::string Name;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
};

class PhoneBook {
	public:
	PhoneBook();
	void Add(Contact *data);
	void PrintAll();
	void PrintOne(int index);

	private:
	static const int	maxCount = 8;
	Contact				book[maxCount];
	int					index;
	static void 		PrintBord(const std::string& str); //печтаьб с рамкой
};

#endif
