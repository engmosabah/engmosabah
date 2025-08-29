#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;
class Course
{
private:
string CourseCode;
string CourseName;
string TeacherName;
public:
    void  setCourseCode(string CourseCode);
   string getCourseCode();
   void setCourseName(string CourseName);
   string getCourseName();
   void setTeacherName(string TeacherName);
   string getTeacherName();
   void print();
    Course();
   Course(string CourseCode,string CourseName,string TeacherName);
 virtual~Course();
};

#endif // COURSE_H
