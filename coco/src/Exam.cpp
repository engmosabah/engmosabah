#include "Exam.h"

Exam::Exam()
{

}

Exam::~Exam()
{

}
void  Exam::steExamName(string ExamName)
{
      this ->ExamName=ExamName;
}
string Exam::getExamName()
{
    return ExamName;
}
void Exam::steCourseCode(string CourseCode)
{
     this->CourseCode=CourseCode;
}
string Exam::getCourseCode()
{
    return CourseCode;
}
void Exam::steExamDate(string ExamDate)
{
     this->ExamDate=ExamDate;
}
string Exam::getExamDate()
{
    return ExamDate;
}
void Exam::print()
{
    cout<<"The ExamName IS:"<<ExamName<<endl;
     cout<<"The courseCode IS:"<<CourseCode<<endl;
      cout<<"The ExamDate IS:"<<ExamDate<<endl;
}
Exam::Exam(string ExamName,string CourseCode,string ExamDate)
{
    this ->ExamName=ExamName;
    this->CourseCode=CourseCode;
    this->ExamDate=ExamDate;
}
