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
    double display()
    {
        return length*breadth;
    }
};
int main()
{
    room r(13, 12);
    cout<<"Area of room: "<<r.display();
    return 0;
}


