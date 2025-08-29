#include "School.h"

School::School()
{
    int studentCounter = 0;
    int TeacherTeachers = 0;
    int StaffSstaffMembers = 0;
    int CourseCourses = 0;
    int ClassroomClassrooms = 0;
}

School::~School()
{
}
void School::steSchoolName(string SchoolName)
{
    this->SchoolName = SchoolName;
}
string School::getSchoolName()
{
    return SchoolName;
}
void School::setAddress(string Address)
{
    this->Address = Address;
}
string School::getAddress()
{
    return Address;
}
void School::stePrincipalName(string PrincipalName)
{
    this->PrincipalName = PrincipalName;
}
string School::getPrincipalName()
{
    return PrincipalName;
}
void School::print()
{
    cout << "The SchoolName IS:" << SchoolName << endl;
    cout << "The Address IS:" << Address << endl;
    cout << "The PrincipalNameIS:" << PrincipalName << endl;
}
School::School(string SchoolName, string Address, string PrincipalName)

{
    this->SchoolName = SchoolName;
    this->Address = Address;
    this->PrincipalName = PrincipalName;
}
void School::addStudents(Student student)
{
    if (StudentCounter < 100)
    {
        Students[StudentCounter] = student;
        StudentCounter++;
    }
    else
    {
        cout << "The Student Is Full" << endl;
    }
}
void School::printStudents()
{
    for (int i = 0; i < StudentCounter; i++)
    {
        Students[i].print();
        cout << "----------------------------------------------------------------------------" << endl;
    }
}
////////
void School::addTeachers(Teacher teacher)
{
    if(TeacherTeachers <50)
    {
        Teachers[TeacherTeachers] =teacher;
        TeacherTeachers++;
    }
    else
    {
    cout <<"The Teachers Is :"<<endl;
    }
}
void School::printTeachers()
{
    for(int i=0;i<TeacherTeachers;i++)
    {
        Teachers[i].print();
        cout<<"----------------------------------------------------------------------------"<<endl;
    }
}
////////
void School::addStaffMembers(Staff staff)
{
    if (StaffStaffMembers < 25)
    {
        StaffMembers[StaffStaffMembers] = staff;
        StaffStaffMembers++;
    }
    else
    {
        cout << "The Staff is Full" << endl;
    }
}
void School::printStaffMembers()
{
    for (int i = 0; i < StaffStaffMembers; i++)
    {
        StaffMembers[i].print();
        cout << "_____________________________________________________________________________________" << endl;
    }
}
void School::addCourses(Course course)
{
    if(CourseCourses<10)
    {
        Courses[CourseCourses]=course;
        CourseCourses++;
    }
    else
    {
        cout <<"The Course Is Full"<<endl;
    }
}
void School::printCourses()
{
    for(int i=0; i<CourseCourses;i++)
    {
        Courses[i].print();
        cout<<"___________________________________________________________________________________________________"<<endl;
    }
}
void School::addClassrooms(Classroom classroom)
{
    if(ClassroomClassrooms<5)
    {
      Classrooms[ClassroomClassrooms] =classroom;
      ClassroomClassrooms++;
    }
    else
    {
        cout<<"The Classroom Is Full "<<endl;
    }
}

void School::printClassrooms()
{
    for(int i=0; i<ClassroomClassrooms;i++)
    {
        Classrooms[i].print();
        cout<<"______________________________________________________________________________________________________"<<endl;
    }
}
