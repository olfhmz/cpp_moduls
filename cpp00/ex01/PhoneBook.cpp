#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	index = 0;
}

void PhoneBook::Add(Contact *data) {
	book[index].Name = data->Name;
	book[index].LastName = data->LastName;
	book[index].NickName = data->NickName;
	book[index].PhoneNumber = data->PhoneNumber;
	book[index].IsEmpty = false;
	index++;
	if (index == maxCount)
		index = 0;
}

void PhoneBook::PrintOne(int	index) {
	if (index > maxCount || index < 0 || book->IsEmpty) {
		std::cout << "Error index input" << std::endl;
		return ;
	}
	std::cout << book[index].Name << std::endl;
	std::cout << book[index].LastName << std::endl;
	std::cout << book[index].NickName << std::endl;
	std::cout << book[index].PhoneNumber << std::endl;
}

void PhoneBook::PrintBord(const std::string& str)
{
	if (str.length() > 10)
		std::cout << '|' << std::setw(10) << std::right << str.substr(0, 9) + ".";
	else
		std::cout << '|' << std::setw(10) << std::right << str;
}

void PhoneBook::PrintAll() {
	std::cout << '|' << std::setw(10) << std::right << "Index";
	std::cout << '|' << std::setw(10) << std::right << "Name";
	std::cout << '|' << std::setw(10) << std::right << "Last Name";
	std::cout << '|' << std::setw(10) << std::right << "Nick Name";
	std::cout << '|' << std::endl;
	for (int i = 0; i < maxCount; i++) {
		if (book[i].IsEmpty)
			continue;
		std::cout << '|' << std::setw(10) << std::right << i;
		PrintBord(book[i].Name);
		PrintBord(book[i].LastName);
		PrintBord(book[i].NickName);
		std::cout << "|" << std::endl;
	}
}
