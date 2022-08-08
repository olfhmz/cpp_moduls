#include "easyfind.hpp"

int main() {

	std::vector<int> arr;
	arr.reserve(10);
	for (int i = 0; i != 10; i++) {
		arr.push_back(i);
	//	std::cout << arr[i] << std::endl;
	}

	std::vector<int>::iterator it;
	it = easyfind(arr, 400);
	if (it == arr.end()) {
		std::cout << "missing" << std::endl;
	}
	else {
		std::cout << "present: " << *it << std::endl;
	}

	std::vector<int>::iterator iter;
	iter = easyfind(arr, 4);
	if (iter == arr.end()) {
		std::cout << "missing" << std::endl;
	}
	else {
		std::cout << "present: " << *iter << std::endl;
	}

	return 0;
}
