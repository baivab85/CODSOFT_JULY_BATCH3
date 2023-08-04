#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

struct Student {
    string name;
    double grade;
};

void displayStudentInfo(const vector<Student>& students) {
    double sum = 0.0;
    double highestGrade = 0.0;
    double lowestGrade = numeric_limits<double>::max();

    for (const auto& student : students) {
        sum += student.grade;
        highestGrade = max(highestGrade, student.grade);
        lowestGrade = min(lowestGrade, student.grade);
    }

    double averageGrade = sum / students.size();

    cout << "Student Grade Summary" << endl;
    cout << "---------------------" << endl;
    cout << "Average Grade: " << averageGrade << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;
}

int main() {
    vector<Student> students;

    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; i++) {
        string name;
        double grade;

        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> name;

        bool validGrade = false;
        while (!validGrade) {
            cout << "Enter the grade of student " << i + 1 << ": ";
            if (cin >> grade) {
                validGrade = true;
            } else {
                cout << "Invalid input. Please enter a numeric grade." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }

        students.push_back({name, grade});
    }

    displayStudentInfo(students);

    return 0;
}
