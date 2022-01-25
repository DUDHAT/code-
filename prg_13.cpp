#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"\n Base class con called";
    }
    ~Base()
    {
        cout<<"\n Base class DEs called";
    }
};
class Derived: public Base
{
    public:
    Derived()
    {
        cout<<"\n Derived class con called";
    }
    ~Derived()
    {
        cout<<"\n Derived class DEs called";
    }

};
int main()
{
    Derived obj;
}
