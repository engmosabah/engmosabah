#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <Person.h>
using namespace std;
class person
{
private:
    string name;
    int age ;
    string gender;
    string address ;
    string phoneNumber;
    string email;
public:
    person();
    ~person();
    person(string name, int age, string gender, string address, string phoneNumber,string email );
    void print();
    void setName(string name);
    void setAge(int age);
    void setGender(string gender);
    void setAddress(string address);
    void setPhonNumder(string phoneNumber);
    void setEmail(string email);
    string getName();
    int getAge();
    string getGender();
    string getAddress();
    string getPhoneNumber();
    string getEmail();
};

#endif // PERSON_H
