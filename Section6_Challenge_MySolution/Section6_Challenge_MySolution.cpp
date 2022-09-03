// Section6_Challenge_MySolution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int numberOfSmallRooms {0};
    int numberOfLargeRooms {0};
    const float pricePerSmallRoom {25.00};
    const float pricePerLargeRoom {35.00};
    const float rateOfTax {0.06};
    const int expiration {30};
    float cost {0};
    float estTotalCost {0};

    std::printf("How many small rooms ya want cleaning: ");
    std::cin >> numberOfSmallRooms;
    std::printf("How many large rooms ya want cleaning: ");
    std::cin >> numberOfLargeRooms;
    std::printf("\nEstimate for service:\n");
    std::printf("Number of small rooms: [%i]\nNumber of large rooms: [%i]\nPrice per small room: [%f]\nPrice per large room: [%f]\n",
        numberOfSmallRooms, numberOfLargeRooms, pricePerSmallRoom, pricePerLargeRoom);
    cost = (numberOfSmallRooms * pricePerSmallRoom) + (numberOfLargeRooms * pricePerLargeRoom);
    std::printf("Cost: [%f]:\n", cost);
    std::printf("Tax: [%f]\n", cost * rateOfTax);
    std::printf("================================\nTotal cost: [%f]\nThis is valid for %i days", (cost + (cost*rateOfTax)), expiration);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
