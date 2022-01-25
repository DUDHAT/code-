#include<iostream>
using namespace std;
int dosum(int,int);
int domal(int,int);
int main()
{
    //void dosum(int,int);
    int a,b;
    cout<<"enter the a";
    cin>>a;
    cout<<"enter the b";
    cin>>b;
    dosum(a,b);
    domal(a,b);
}
int dosum(int x,int y)
{
    cout<<x+y;
}
int domal(int x,int y)
{
    cout<<"\n"<<x*y;
}