#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Please enter first number: ";
    cin >> a;
    cout << "Please enter second number: ";
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping the 1st number is: " << a << endl;
    cout << "After swapping the 2nd number is: " << b << endl;
    return 0;
}