#include<iostream>
using namespace std;
class Tast
{
    private:
    int x,y;
    public:
    int a=10,b=20;
    void testfun()
    {
        cout<<"\n a:"<<a;
        cout<<"\n b:"<<b;
        
    }
};
int main()
{
    Tast t1;
    t1.testfun();
}
