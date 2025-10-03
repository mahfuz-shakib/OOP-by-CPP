#include<iostream>
using namespace std;
class loc
{
    int longt, lati;
public:
    loc(int a, int b)
    {
        longt=a;
        lati=b;
    }
    void show()
    {
        cout<<longt<<endl;
        cout<<lati<<endl;
    }
    loc operator+(loc op2);
};
loc loc :: operator+(loc op2)
{
    loc temp;
    temp.longt=longt+op2.longt;
    temp.lati=lati+op2.lati;
    cout<<temp.longt<<" "<<temp.lati;
}
int main()
{
    loc ob1(10,20), ob2(15,30);
    ob1.show();
    ob2.show();
    ob1+ob2;
}
