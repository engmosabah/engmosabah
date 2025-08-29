#include "Student.h"
#include <iostream>
using namespace std;

Student::Student()
{

}

Student::Student(string name, int age, string gender, string address, string phoneNumber,
 string email,int studentID, string gradeLevel, float gpa)
    : person(name, age, gender, address, phoneNumber, email)
{
    this->studentID = studentID;
    this->gradeLevel = gradeLevel;
    this->gpa = gpa;
}

Student::~Student()
{

}

void Student::setStudentID(int studentID)
{
    this->studentID = studentID;
}

int Student::getstudentID()
{
    return studentID;
}

void Student::steGradeLevel(string gradeLevel)
{
    this->gradeLevel = gradeLevel;
}

string Student::getGradeLevel()
{
    return gradeLevel;
}

void Student::setGPA(float GPA)
{
    this->gpa = GPA;
}

float Student::getGPA()
{
    return gpa;
}

void Student::print()
{
    person::print();
    cout << "The studentID is: " << studentID << endl;
    cout << "The gradeLevel is: " << gradeLevel << endl;
    cout << "The GPA is: " << gpa << endl;
}


