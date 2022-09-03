// Section5_Challenge_MySolution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // part1
    std::cout << "Hello Frank!\n";

    // part2
    int numberOf = 3;

    std::cout << "There were " << numberOf << " cats in the window\n";

    // part3
    int day, month, year;
    std::cout << "Enter day, month, year\n";
    std::cin >> day >> month >> year;
    std::cout << "You entered:\n" << "Day: " << day << "\nMonth: " << month << "\nYear: " << year << std::endl;
    return 0;
}
