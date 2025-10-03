#include<iostream>
using namespace std;
class A
{
protected:
    int x;
public:
    void getx();
};
class B
{
protected:
    int y;
public:
    void gety();
};
class C: public A, public B
{
    int sum;
public:
    void add();
    void display();
};
void A::getx()
{
    cout<<"Enter x: ";
    cin>>x;
}
void B::gety()
{
    cout<<"Enter y: ";
    cin>>y;
}
void C::add()
{
   getx();
   gety();
    sum=x+y;
}
void C::display()
{
    cout<<"X = "<<x<<endl;
    cout<<"Y = "<<y<<endl;
    cout<<"X+Y = "<<sum<<endl;
}
int main ()
{
    C ob;
    ob.add();
    ob.display();
}
