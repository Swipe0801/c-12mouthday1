#include<iostream>

int main(void) {

	std::cout << 5 << 12 << std::endl;

	std::cout.width(-10);
	std::cout << 5;
	std::cout.fill('&');
	std::cout.width(10);
	std::cout << 12 << std::endl;
	std::cout.fill(' ');
	std::cout.width(10);
	std::cout << 12 << std::endl;

	std::cout << std::hex << 12 << std::endl;
	std::cout << std::dec << 15 << std::endl;
	return 0;
}