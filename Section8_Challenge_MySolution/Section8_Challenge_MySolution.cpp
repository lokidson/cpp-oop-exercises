// Section 8 Challenge 

/*  For this program I will be using US dollars and cents.

    Write a program that asks the user to enter the following :
    An integer representing the number Of cents
    You may assume that the number of cents entered is greater than or equal to zero

    The program should then display how to provide that change to the user.
    In the US :
    1 dollar is 100 cents
    1 quarter is 25 cents
    1 dime is 10 cents
    1 nickel is 5 cents, and
    1 penny is 1 cent.
*/

#include <iostream>
using namespace std;

int main()
{
    int numberOfCents;

    const int centsToDollars {100};
    const int centsToQuarters {25};
    const int centsToDimes    {10};
    const int centsToNickels   {5};
    const int centsToPennys    {1};

    int numberOfDollars, numberOfQuarters, numberOfDimes, numberOfNickels, numberOfPennys {0};

    cout << "Please enter number of cent: ";
    cin >> numberOfCents;

    numberOfDollars = numberOfCents / centsToDollars;
    numberOfCents -= numberOfDollars * centsToDollars;
    
    numberOfQuarters = numberOfCents / centsToQuarters;
    numberOfCents -= numberOfQuarters * centsToQuarters;

    numberOfDimes = numberOfCents / centsToDimes;
    numberOfCents -= numberOfDimes * centsToDimes;

    numberOfNickels = numberOfCents / centsToNickels;
    numberOfPennys = numberOfCents - (numberOfNickels * centsToNickels);

    cout << "Your expected change:\n\n";
    cout << "No. Dollars:  " << numberOfDollars << endl;
    cout << "No. Quarters: " << numberOfQuarters << endl;
    cout << "No. Dimes:    " << numberOfDimes << endl;
    cout << "No. Nickels:  " << numberOfNickels << endl;
    cout << "No. Pennys:   " << numberOfPennys << endl;
    //cout << "DEBUG: Remaining cents: " << numberOfCents << endl;
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
