#include "Staff.h"
Staff::Staff()
{

}
Staff::Staff(string name, int age, string gender, string address, string phoneNumber,string email,
             int staffID,string role,float salary)
             :person(name,age,gender,address,phoneNumber,email)
{

    this->staffID=staffID;
    this->role=role;
    this->salary=salary;
}
Staff::~Staff()
{

}

void  Staff::setStaffID(int staffID)
{
    this->staffID=staffID;
}
int  Staff::getStaffID()
{
    return staffID;
}
void  Staff::setRole(string role)
{
    this->role=role;
}
string  Staff::getRole()
{
    return role;
}
void  Staff::setSalary(float salary)
{
    this->salary=salary;
}
int  Staff::getSalary()
{
    return salary;
}
void Staff::print()
{
 person::print();
    cout <<"The StaffID Is"<<staffID<<endl;
    cout <<"The Role Is"<<role<<endl;
    cout <<"The Salary Is"<<salary<<endl;
}
