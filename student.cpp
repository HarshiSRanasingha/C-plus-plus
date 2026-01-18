#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    void displayData() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.setData("Harshani", 20);
    s1.displayData();
    return 0;
}
