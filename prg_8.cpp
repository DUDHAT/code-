#include <iostream>
#include <math.h>
using namespace std;
int findangle(int hour, int min)
{
    int h = (hour * 360) / 12 + (min * 360) / (12 * 60);
    int m = (min * 360) / 60;
    int angle = abs(h - m);
    if (angle > 180)
    {
        angle = 360 - angle;
    }
    return angle;
}
int main()
{
    int hour = 11;
    int min =45;
    cout << findangle(hour, min);
    return 0;
}
