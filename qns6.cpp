// Write a C++ program to implement a recursive function to calculate the sum of even and odd numbers in a given range.
#include <iostream>
using namespace std;

int sumEven(int start, int end) {
    if (start > end) return 0;
    if (start % 2 == 0)
        return start + sumEven(start + 1, end);
    else
        return sumEven(start + 1, end);
}

int sumOdd(int start, int end) {
    if (start > end) return 0;
    if (start % 2 != 0)
        return start + sumOdd(start + 1, end);
    else
        return sumOdd(start + 1, end);
}

int main() {
    int s, e;
    cout << "Enter start of the range: ";
    cin >> s;
    cout << "Enter end of the range: ";
    cin >> e;

    cout << "The sum of even numbers: " << sumEven(s, e) << endl;
    cout << "The sum of odd numbers: " << sumOdd(s, e) << endl;
    return 0;
}