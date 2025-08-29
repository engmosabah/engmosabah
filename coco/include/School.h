#ifndef SCHOOL_H
#define SCHOOL_H
#include <iostream>
#include <Student.h>
#include <Teacher.h>
#include <Staff.h>
#include <Course.h>
#include <Classroom.h>
using namespace std;
class School
{
private:
    int StudentCounter;
    int TeacherTeachers;
    int StaffStaffMembers;
    int CourseCourses;
    int ClassroomClassrooms;
    string SchoolName;
    string Address;
    string PrincipalName;
    Student Students[100];
    Teacher Teachers[50];
    Staff StaffMembers[25];
    Course Courses[10];
    Classroom Classrooms[5];
public:
    void steSchoolName( string SchoolName);
    string getSchoolName();
    void setAddress(string Address);
    string getAddress();
    void stePrincipalName(string PrincipalName);
    string getPrincipalName();
    School();
    void print();
    void printStudents();
    void printTeachers();
    void printStaffMembers();
    void printCourses();
    void printClassrooms();
    School(string SchoolName, string Address, string PrincipalName);

    virtual ~School();

    void addStudents( Student Students);
    void addTeachers( Teacher Teachers);
    void addStaffMembers( Staff StaffMembers);
    void addCourses( Course Courses);
    void addClassrooms( Classroom Classrooms);

};

#endif // SCHOOL_H
