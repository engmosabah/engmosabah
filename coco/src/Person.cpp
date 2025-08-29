#include "Person.h"
person:: person()
{

}
person::~person()
{

}
person::person(string name, int age, string gender, string address, string phoneNumber,string email )
{
    this->name=name;
    this->age=age;
    this->gender=gender;
    this->address=address;
    this->phoneNumber=phoneNumber;
    this->email=email;
}
void person::print()
{
    cout <<"The Name Is"<<name<<endl;
    cout <<"The Age Is"<<age<<endl;
    cout <<"The Gender Is"<<gender<<endl;
    cout <<"The Address Is"<<address<<endl;
    cout <<"The PhoneNumber Is"<<phoneNumber<<endl;
    cout <<"The Email Is"<<email<<endl;
}
void person::setName(string name)
{
    this->name=name;
}
string person::getName()
{
    return name;
}
void person::setAge(int age)
{
    this->age=age;
}
int person::getAge()
{
    return age;
}
void person::setGender(string gender)
{
    this->gender=gender;
}
string person::getGender()
{
    return gender;
}
void person::setAddress(string address)
{
    this->address=address;
}
string person::getAddress()
{
    return address;
}

void person::setEmail(string email)
{
    this->email=email;
}
string person::getEmail()
{
    return email;
}
