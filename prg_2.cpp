#include<iostream>
using namespace std;
class Test
{
    private:
    int x,y;
    public:
    int a,b;
    void testfunc()
    {
        cout<<"\n a:"<<a;
        cout<<"\n b:"<<b;
    }
};
int main()
{
    Test t1,t2;
    t1.a=40;
    t1.b=50;
    t2.a=100;
    t2.b=200;
    t2.testfunc();
    t1.testfunc();
}


