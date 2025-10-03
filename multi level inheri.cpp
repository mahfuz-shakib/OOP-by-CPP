
#include<iostream>
using namespace std;

class Food
{
protected:
    char name[50];
    char name1[50];

public:
    void getf();
};
class Rate:public Food
{
protected:
    int price;
    int price1;
  //char name[50];
  //char name1[50];
public:
    void getr();
  //void getf();
};
class display: public Rate
{
    int sum;
  //int price;
  //int price1;
  //char name[50];
  //char name1[50];
public:
    void add();
    void show();
};

void Food::getf()
{
    cout<<"Enter food names: ";
    cin>>name>>name1;
}
void Rate::getr()
{
    cout<<"Enter prices: ";
    cin>>price>>price1;
}
void display::add()
{
   //getf();
  // getr();
    sum=price+price1;
}
void display::show()
{
    cout<<"*************************"<<endl;
    cout<<"Name\tprice"<<endl;
    cout<<name<<'\t'<<price<<endl;
    cout<<name1<<'\t'<<price1<<endl;
    cout<<"Total: "<<sum<<endl;
}
int main ()
{
    display ob;
    ob.getf();
    ob.getr();
    ob.add();
    ob.show();
}
