#include "Classroom.h"

Classroom::Classroom()
{

}

Classroom::~Classroom()
{

}
void Classroom::steRoomNumber(int RoomNumber)
{
    this->RoomNumber=RoomNumber;
}
int Classroom::getRoomNumber()
{
    return RoomNumber;
}
void Classroom::setCapacity(int Capacity)
{
    this->Capacity=Capacity;
}
int Classroom::getCapacity()
{
    return Capacity;
}
void Classroom::print()
{
    cout <<"The Room Number Is :"<<RoomNumber<<endl;
    cout<<"The Capacity IS:" <<Capacity<<endl;
}
Classroom:: Classroom(int RoomNumber,int Capacity)
{
    this->RoomNumber=RoomNumber;
     this->Capacity=Capacity;
}

