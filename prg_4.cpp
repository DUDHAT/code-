#include <iostream>
using namespace std;
class Test
{
private:
    int x, y;

public:
    void set(int a, int b)
    {
        x = a;
        y = b;
    }
    void print()
    {
        cout << "\n x:" << x;
        cout << "\n y:" << y;
    }
};
int main()
{
    Test t1, t2;
    t1.set(50,45);
    t2.set(60, 65);
    t1.print();
    t2.print();
}
