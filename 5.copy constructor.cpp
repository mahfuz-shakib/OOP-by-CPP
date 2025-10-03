#include<iostream>
using namespace std;
class room
{
    double length, breadth;
public:
    room(double l, double b)
    {
        length=l;
        breadth=b;
    }
    room(room &ob)
    {
        length = ob.length;
        breadth = ob.breadth;
    }
    double display()
    {
        return length*breadth;
    }
};
int main()
{
    room r1(13, 12);
    room r2=r1;
    cout<<"Area of room r1: "<<r1.display()<<endl;
    cout<<"Area of room r2: "<<r2.display()<<endl;


    return 0;
}



