#include<iostream>
using namespace std;
class A
{
    int m;
public:
    int n;
    void getdata_mn()
    {
        cout<<"Enter value of M: ";
        cin>>m;
        cout<<"Enter value of N: ";
        cin>>n;
    }
    int retm()
    {
        return m;
    }
};
class B: protected A
{
    int sum;
public:
    int add();
    void display();
};
int B::add ()
{
    getdata_mn();
    sum=retm()+n;
    return  (sum);
}
void B::display()
{
    cout<<"Value of M: "<<retm()<<endl;
    cout<<"Value of N: "<<n<<endl;
    cout<<"Sum: "<<sum<<endl;
}

int main()
{
    B ob;
    //ob.getdata_mn();
    ob.add();
    ob.display();
}
