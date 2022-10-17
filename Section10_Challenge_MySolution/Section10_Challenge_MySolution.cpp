// Section10_Challenge_MySolution.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decrypt the encrypted message back to the original message.

You may use the 2 strings below for your subsitition.
For example, to encrypt you can replace the character at position n in alphabet
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, punctuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputMessage{};
    string encryptedMessage{};
    string decryptedMessage{};
    string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    string key{ "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };

    printf("Please enter message: ");
    getline(cin, inputMessage);

    printf("\n----------------------------------------------------------\n");

    for (size_t i {0}; i < inputMessage.length(); i++) {
        if (isalpha(inputMessage.at(i))) {
            auto alphaIdx = alphabet.find(inputMessage.at(i));
            encryptedMessage.push_back(key.at(alphaIdx));
        }
        else {
            encryptedMessage.push_back(inputMessage.at(i));
        }
    }

    printf("Encrypted message: %s", encryptedMessage.c_str());
    printf("\n----------------------------------------------------------\n");

    for (size_t i{ 0 }; i < encryptedMessage.length(); i++) {
        if (isalpha(encryptedMessage.at(i))) {
            auto alphaIdx = key.find(encryptedMessage.at(i));
            decryptedMessage.push_back(alphabet.at(alphaIdx));
        }
        else {
            decryptedMessage.push_back(encryptedMessage.at(i));
        }
    }

    printf("Decrypted message: %s", decryptedMessage.c_str());

    cout << endl;
    return 0;
}
