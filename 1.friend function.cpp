#include<iostream>
using namespace std;
class addition
{
    int p, q;
public:
    void set_ab(int a, int b);
    friend add(addition x);
    int get();
};
void addition::set_ab(int a, int b)
{
    p=a;
    q=b;
}
int add(addition x)
{
    return x.p+x.q;
}
int main()
{
    addition ob;
    int m, n;
    cin>>m>>n;
    ob.set_ab(m,n);
    cout<<add(ob);

}
