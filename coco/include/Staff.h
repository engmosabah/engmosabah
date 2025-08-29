#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include <Person.h>
using namespace std;
class Staff:public person
{
private:
    int staffID;
    string role;
    float salary;
public:
    Staff();
    Staff(int staffID,string role,float salary);
    void setStaffID(int staffID);
    int getStaffID();
    void setRole(string role);
    string getRole();
    void setSalary(float salary);
    int getSalary();

    Staff(string name, int age, string gender, string address, string phoneNumber,string email,
          int staffID,string role,float salary);
          void print();
~Staff();
};

#endif // STAFF_H
