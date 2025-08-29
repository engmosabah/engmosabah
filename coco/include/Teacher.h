#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include <Person.h>
using namespace std;
class Teacher:public person
{
private:
    int teacherID;
    string subjectSpecialization;
    float salary;
public:
    Teacher();
    Teacher(string name, int age, string gender, string address,string phoneNumber,
                 string email, int teacherID,string subjectSpecialization,float sal);
    void setTeacherID(int teacherID);
    int getstudentID();
    void  steSubjectSpecialization(string subjectSpecialization);
    string getSubjectSpecialization();
    void  setSalary(float salary);
    float getSalary();
    void print();
    ~Teacher();
};

#endif // TEACHER_H
