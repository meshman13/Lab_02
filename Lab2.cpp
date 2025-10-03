#include <iostream>
#include <string>

using namespace std;

string name;
int age;
float gpa;

int main() {
    cout << "Enter name: ";
    cin >> name;
    
    cout << "Enter age: ";
    cin >> age;
    
    cout << "Enter GPA: ";
    cin >> gpa;
    
    cout << "Student: " << name << ", Age: " << age << ", GPA: " << gpa << endl;
    
    return 0;
}

