#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <person.h>
using namespace std;
class Student:public person
{
private:
    int studentID;
    string gradeLevel;
    float gpa;
public:
    Student();
    Student(int studentID, string gradeLevel, float GPA);
    void setStudentID(int studentID);
    int getstudentID();
    void  steGradeLevel(string gradeLevel);
    string getGradeLevel();
    void  setGPA(float GPA);
    float getGPA();
    Student(string name, int age, string gender, string address, string phoneNumber, string email,
            int studentID, string gradeLevel, float GPA);
    void print();
    ~Student();
};
#endif // STUDENT_H
