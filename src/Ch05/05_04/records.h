#pragma once

#include <vector>
#include <string>
using namespace std;

class Student{
private:
    int id;
    string name;

public:
    Student(int the_id, string the_name);
    int get_id() const;
    string get_name() const;
};

class Course{
private:
    int id;
    string name;
    unsigned char credits;

public:
    Course(int the_id, string the_name, unsigned char the_credits);
    int get_id() const;
    string get_name() const;
    int get_credits() const;
};

class Grade{
private:
    int student_id;
    int course_id;
    char grade;

public:
    Grade(int sid, int cid, char grd);
    int get_student_id() const;
    int get_course_id() const;
    char get_grade() const;
};

class StudentRecords{
private:
    vector<Student> students;
    vector<Course> courses;
    vector<Grade> grades;

    float get_num_grade(char) const;
    
public:
    void add_student(int, string);
    void add_course(int, string, unsigned char);
    void add_grade(int, int, char);

    string get_student_name(int) const;
    unsigned char get_course_credits(int) const;
    float get_GPA(int) const;
    void report_card(int) const;
};
