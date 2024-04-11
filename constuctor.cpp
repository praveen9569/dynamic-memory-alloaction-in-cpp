#include<iostream>
using namespace std;
class addition
{
    public:
    int x;
    int y;
    int add();
    addition(int a,int b)
    {
        x=a;
        y=b;
    }
    addition ()
    {
        
    }
};
int addition :: add()
{
    return x+y;
}
int main()
{
   addition a = addition(2,3);
   addition b;
   // cin>>a.x>>b.y;
    int z=a.add();
    cout<<"addition of "<<a.x<<" and "<<b.y<<" is "<<z<<endl;
    return 0;
}