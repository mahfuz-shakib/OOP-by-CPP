#include<iostream>
using namespace std;
class A
{
public:
    int x;
};
class B:  public A
{
public:
    x=30;
    int y=9;
};
class C: public A
{
public:
     x=30;
    int z=20;
};
class D: virtual public B, virtual public C
{
public:
    /*int x=30;
    int y=10;
    int x=30;
    int z=20;
    */
    int m=50;
    void display()
    {
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;
        cout<<m<<endl;
    }
};
int main ()
{
    D ob;
    ob.B::display();
}

