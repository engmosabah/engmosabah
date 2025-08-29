#ifndef EXAM_H
#define EXAM_H
#include <iostream>
using namespace std;

class Exam
{
private:
    string ExamName;
string CourseCode;
 string ExamDate;
    public:
        void  steExamName(string ExamName);
        string getExamName();
        void steCourseCode(string CourseCode);
        string getCourseCode();
        void steExamDate(string ExamDate);
        string getExamDate();
        void print();
        Exam();
        Exam(string ExamName,string CourseCode,string ExamDate);
        virtual ~Exam();

};

#endif // EXAM_H
