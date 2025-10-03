#include<iostream>
using namespace std;
class room
{
    double length, breadth, height;
public:
    void set_room(double l, double b, double h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    double display()
    {
        return length*breadth*height;
    }
};
int main()
{
    room r;
    r.set_room(13, 12,10.5);
    cout<<"Volume of room: "<<r.display();
    return 0;
}
