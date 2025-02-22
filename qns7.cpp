// Write a C++ program that removes a specific character from a given string. Return the updated string.
// Test Data:
// ("Filename", "e") -> "Filnam"
// ("Compilation Time", "i") -> "Complaton Tme"

#include <iostream>
#include <string>
using namespace std;

string removeCharacter(string str, char ch) {
    string result = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ch) {
            result += str[i];
        }
    }

    return result;
}

int main() {
    string str;
    char ch;

    str = "Filename";
    ch = 'e';
    cout << "Please Updated string: " << removeCharacter(str, ch) << endl;

    str = "The Compilation Time";
    ch = 'i';
    cout << "The Updated string: " << removeCharacter(str, ch) << endl;
    return 0;
}