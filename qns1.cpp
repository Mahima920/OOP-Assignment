#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string n, int id, double sal)
        : name(n), employeeID(id), salary(sal) {}

    void setPerformance(int rating) {
        if(rating >= 9) {
            salary *= 1.30;
        } else if(rating >= 6) {
            salary *= 1.10;
        } else {
            salary *= 1.02;
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp("Priyanshu", 1578, 50000);
    emp.setPerformance(8);
    emp.display();

    return 0;
}