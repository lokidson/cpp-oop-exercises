#include <iostream> // Preprocessor directive

int main()
{
	int favouriteNumber;
	std::cout << "Enter number input, between 1 and 100:" << std::endl;
	std::cin >> favouriteNumber;
	std::cout << "You entered: [" << favouriteNumber << "]; You lose, this was obviously the wrong number." << std::endl;
	return 0;
}
