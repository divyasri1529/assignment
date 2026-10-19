#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    int rollNumber;
    string name;
    float gpa;
};

void displayMenu() {
    cout << "\n=== STUDENT MANAGEMENT SYSTEM ===" << endl;
    cout << "1. Add Student Details" << endl;
    cout << "2. View All Student Records" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    vector<Student> students;
    int choice;

    // Adding dummy records for demonstration
    students.push_back({101, "Divya Sri", 9.2});
    students.push_back({102, "Rahul Kumar", 8.5});

    do {
        displayMenu();
        cin >> choice;

        if (choice == 1) {
            Student s;
            cout << "Enter Roll Number: ";
            cin >> s.rollNumber;
            cin.ignore(); // clear buffer
            cout << "Enter Name: ";
            getline(cin, s.name);
            cout << "Enter GPA: ";
            cin >> s.gpa;
            students.push_back(s);
            cout << "Student added successfully!\n";
        } 
        else if (choice == 2) {
            cout << "\n--- Student Records ---" << endl;
            for (const auto& s : students) {
                cout << "Roll No: " << s.rollNumber << " | Name: " << s.name << " | GPA: " << s.gpa << endl;
            }
        }
    } while (choice != 3);

    cout << "Exiting program. Thank you!" << endl;
    return 0;
}