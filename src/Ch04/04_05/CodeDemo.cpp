// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"
using namespace std;

int main(){
    float GPA = 0.0f;
    int id;
    
    vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    cout << "Enter a student ID: " << flush;
    cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here
    float grade_weight = 0.0f;
    int num_credits = 0;

    for (int i = 0; i < grades.size(); i++){

        if (grades[i].get_student_id() == id){
            float grade_num;
            switch(grades[i].get_grade()){
                case 'A': grade_num = 4.0f;
                    break;
                case 'B': grade_num = 3.0f;
                    break;
                case 'C': grade_num = 2.0f;
                    break;
                case 'D': grade_num = 1.0f;
                    break;
                default: grade_num = 0.0f;
                    break;
            }

            num_credits += courses[grades[i].get_course_id() - 1].get_credits();
            grade_weight += grade_num *  courses[grades[i].get_course_id() - 1].get_credits();
        }
    }
    float gpa = grade_weight / num_credits;
    cout << "The GPA is: " << gpa << endl;

    string student_str;
    student_str = students[0].get_name(); // Change this to the selected student's name

    cout << "The GPA for " << student_str << " is " << GPA << endl;
    
    cout << endl << endl;
    return (0);
}
