#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <iostream>
using namespace std;
class Classroom
{
private:
    int RoomNumber;
    int Capacity;
public:
    void steRoomNumber(int RoomNumber);
    int getRoomNumber();
    void setCapacity(int Capacity);
    int getCapacity();
    void print();
    Classroom();
    Classroom(int RoomNumber,int Capacity);
    virtual ~Classroom();


};

#endif // CLASSROOM_H
