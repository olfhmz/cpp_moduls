#include "PhoneBook.hpp"
#include <stdlib.h>
#include <errno.h>

//Функция strtol() конвертирует строковое представление числа, которое хранится в строке start,
// в длинное целое и возвращает результат.

int	read_index() {
	std::string str;
	std::cout << "Enter index > ";
	getline(std::cin, str, '\n');
	if (std::cin.eof())
		exit(1);
	const char *start = str.c_str();
	char *end;
	long num = strtol(start, &end, 10);
	if (end == start || *end != '\0' || errno == ERANGE)
		return -1;
	if (num > 2147483647 || num < -2147483646)
		return -1;
	return (int)num;
}

void	readContact(Contact *data) {
	std::cout << "First Name > ";
	getline(std::cin, data->Name, '\n');
	if (std::cin.eof())
		exit(1);
	std::cout << "Last Name > ";
	getline(std::cin, data->LastName, '\n');
	if (std::cin.eof())
		exit(1);
	std::cout << "Nick Name > ";
	getline(std::cin, data->NickName, '\n');
	if (std::cin.eof())
		exit(1);
	std::cout << "Phone Number > ";
	getline(std::cin, data->PhoneNumber, '\n');
	if (std::cin.eof())
		exit(1);
}

int	main() {
	Contact 	contact;
	PhoneBook 	phonebook;
	std::string	cmd;

	while (true) {
		std::cout << "Get Command Pls > ";
		getline(std::cin, cmd, '\n');
		if (std::cin.eof())
			exit (1);
		if (cmd == "EXIT")
			return 0;
		else if (cmd == "ADD") {
			readContact(&contact);
			phonebook.Add(&contact);
		}
		else if (cmd == "SEARCH") {
			phonebook.PrintAll();
			phonebook.PrintOne(read_index());
		}
	}
}