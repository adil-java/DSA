#include <iostream>
#include <string>
using namespace std;

double calculateGPA(double grades[], int numberOfGrades, int creditHours) {
    double totalPoints = 0;
    for (int i = 0; i < numberOfGrades; i++) {
        totalPoints += grades[i] * creditHours;
    }
    return totalPoints / (numberOfGrades * creditHours);
}
int main() {
    const int numStudents = 5;
    const int numCourses = 5;
    const int creditHours = 3;

    string students[numStudents] = {"Ali", "Hiba", "Asma", "Zain", "Faisal"};

    double grades[numStudents][numCourses] = {
        {3.66, 3.33, 4.0, 3.0, 2.66},
        {3.33, 3.0, 3.66, 3.0, -1},
        {4.0, 3.66, 2.66, -1, -1},
        {2.66, 2.33, 4.0, -1, -1},
        {3.33, 3.66, 4.0, 3.0, 3.33}
    };
    for (int i = 0; i < numStudents; i++) {
        int validGradesCount = 0;
        double validGrades[numCourses];

        for (int j = 0; j < numCourses; j++) {
            if (grades[i][j] != -1) {
                validGrades[validGradesCount] = grades[i][j];
                validGradesCount++;
            }
        }
        double gpa = calculateGPA(validGrades, validGradesCount, creditHours);
        cout<< students[i] << ": " << gpa <<  " GPA "<<  endl;
    }
    return 0;
}
