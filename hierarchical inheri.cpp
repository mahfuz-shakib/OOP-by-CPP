#include<iostream>
using namespace std;
class number
{

protected:
    int x, y;
public:
    void getnum()
    {
        cout<<"Enter x: ";
        cin>>x;
        cout<<"Enter y: ";
        cin>>y;
    }
};
class addition:public number
{
    int sum;
public:
    void  getadd();
};
class substruction: public number
{
    int sub;
public:
    void getsub();
};
void addition ::getadd()
{
    getnum();
    sum=x+y;
    cout<<"X+Y="<<sum<<endl;

}
void substruction ::getsub()
{
    getnum();
    sub=x-y;
    cout<<"X-Y="<<sub<<endl;
}
int main ()
{
    addition ob;
    substruction ob1;
    ob.getadd();
    ob1.getsub();
}
