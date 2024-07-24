#ifndef COW_H
#define COW_H

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

#endif