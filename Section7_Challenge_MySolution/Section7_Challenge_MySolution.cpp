// Section7_Challenge_MySolution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printVector(std::string name, vector<int> &myVector);

int main()
{
    //Task 1: Definition
    vector <int> vector1;
    vector <int> vector2;

    //Task 2: .push_back
    vector1.push_back(10);
    vector1.push_back(20);
    vector2.push_back(100);
    vector2.push_back(200);

    //Task 3: .at
    printVector("1", vector1);
    printVector("2", vector2);

    //task 4: Two dimensional vector
    vector<vector<int>> vector2D;
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);

    //Task 5: Access 2D elements
    printVector("2D.at(0)", vector2D.at(0));
    printVector("2D.at(1)", vector2D.at(1));

    //Task 6:
    vector1.at(0) = 1000;

    //Task 7:
    printVector("1", vector1);
    printVector("2D.at(0)", vector2D.at(0));
}

void printVector(std::string name, vector<int> &myVector)
{
    for (std::size_t i = 0; i < myVector.size(); i++){
        std::printf("vector%s.at(%i): [%i];\n", name.c_str(), i, myVector.at(i));
    }
    std::printf("vector%s.size(): [%i]\n", name.c_str(), myVector.size());
}
