#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string className;
    int rollNumber;
    double marks;

public:
    Student(string n, string c, int r, double m)
        : name(n), className(c), rollNumber(r), marks(m) {}

    char calculateGrade() {
        if (marks >= 90) return 'A+';
        else if (marks >= 80) return 'A';
        else if (marks >= 70) return 'B+';
        else if (marks >= 60) return 'C';
        else return 'F';
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Student st("Mahima", "10A", 21, 85.5);
    st.display();
    return 0;
}