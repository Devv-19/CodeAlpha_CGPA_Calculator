/*                      Cgpa Calculator                 */

#include <iostream>
#include <vector>
#include <iomanip> // for setprecision
using namespace std;

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    vector<string> courseNames(numCourses);
    vector<int> credits(numCourses);
    vector<double> grades(numCourses);
    
    double totalGradePoints = 0, totalCredits = 0;

    cout << "\n--- Enter details for each course ---\n";

    for (int i = 0; i < numCourses; ++i) {
        cout << "\nCourse " << i + 1 << " name: ";
        cin >> courseNames[i];

        cout << "Credit Hours for " << courseNames[i] << ": ";
        cin >> credits[i];

        cout << "Grade (out of 10) for " << courseNames[i] << ": ";
        cin >> grades[i];

        totalGradePoints += grades[i] * credits[i];
        totalCredits += credits[i];
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << "\n======= CGPA REPORT =======\n";
    cout << left << setw(15) << "Course" << setw(10) << "Credits" << "Grade" << endl;

    for (int i = 0; i < numCourses; ++i) {
        cout << left << setw(15) << courseNames[i] 
             << setw(10) << credits[i] 
             << grades[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits;
    cout << "\nCGPA: " << fixed << setprecision(2) << cgpa << endl;

    return 0;
}
