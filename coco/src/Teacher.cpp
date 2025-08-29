#include "Teacher.h"
Teacher::Teacher()
{

}

Teacher::Teacher(string name, int age, string gender, string address,string phoneNumber,
                 string email, int teacherID,string subjectSpecialization,float salary)
    : person(name, age, gender, address, phoneNumber, email)
{
    this->teacherID = teacherID;
    this->subjectSpecialization = subjectSpecialization;
    this->salary = salary;
}

Teacher::~Teacher()
{

}

void Teacher::setTeacherID(int teacherID)
{
    this->teacherID = teacherID;
}

   int Teacher::getstudentID()
{
    return teacherID;
}

 void  Teacher::steSubjectSpecialization(string subjectSpecialization)
{
    this->subjectSpecialization = subjectSpecialization;
}

string Teacher::getSubjectSpecialization()
{
    return subjectSpecialization;
}

void Teacher::setSalary(float salary)
{
    this->salary = salary;
}

float Teacher::getSalary()
{
    return salary;
}

void Teacher::print()
{
    person::print();
    cout << "The Teacher ID is: " << teacherID << endl;
    cout << "The Subject Specialization is: " << subjectSpecialization << endl;
    cout << "The Salary is: " << salary << endl;
}
