#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPtr = &str;
	std::string &stringRef = str;

	std::cout << "string: " << str << std::endl;
	std::cout << "stringPtr: " << stringPtr << std::endl;
	std::cout << "stringRef: " << &stringRef << std::endl;
	
	std::cout << std::endl;

	std::cout << "stringPtr: " << *stringPtr << std::endl;
	std::cout << "stringRef: " << stringRef << std::endl;
}
