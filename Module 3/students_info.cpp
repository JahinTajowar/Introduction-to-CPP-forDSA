/******************
WAP for student info
************************/
#include <iostream>
using namespace std;

class Student {
public:
    char name[100];
    int Roll;
    double CGPA;
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Student students[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":" << endl;

        cout << "Enter name: ";
        cin.ignore();
        cin.getline(students[i].name, 100);

        cout << "Enter roll number: ";
        cin >> students[i].Roll;

        cout << "Enter CGPA: ";
        cin >> students[i].CGPA;
    }
    cout << "\nDetails of all students:\n";
    for (int i = 0; i < n; ++i) {
        cout << students[i].name << " " << students[i].Roll << " " << students[i].CGPA << endl;
    }

    return 0;
}
