#include "Course.h"

Course::Course()
{

}

Course::~Course()
{

}
   void  Course::setCourseCode(string CourseCode)
   {
       this->CourseCode=CourseCode;
   }
   string Course::getCourseCode()
   {
       return CourseCode;
   }
   void Course::setCourseName(string CourseName)
   {
          this->CourseName=CourseName;
   }
   string Course::getCourseName()
   {
       return CourseName;
   }
   void Course::setTeacherName(string TeacherName)
   {
       this->TeacherName=TeacherName;
   }
   string Course::getTeacherName()
   {
       return TeacherName;
   }
   void Course::print()
   {
       cout <<"The Coures Code IS :"<<CourseCode <<endl;
       cout <<"The Course Name IS :"<<CourseName <<endl;
       cout <<"The Teacher Name IS: " <<TeacherName<<endl;
   }

   Course::Course(string CourseCode,string CourseName,string TeacherName)
   {
      this->CourseCode=CourseCode;
    this->CourseName=CourseName;
    this->TeacherName=TeacherName;
   }
