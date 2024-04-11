#include<iostream>
using namespace std;

class addition 
{
   public:
     int x,y;
     addition(int a,int b)
     {
        x=a;
        y=b;
     }
     int add()
     {
        return x+y;
     }
};

int main()
{
    cout<<"entr two no. "<<endl;
    int a,b;
    cin>>a>>b;
    addition*p=new addition(a,b);
    int z = p->add();
    cout<<" addotion of "<<p->x<<" and "<<p->y<<" is "<<z<<endl;
    return 0;

}