
#include <iostream>
using namespace std;

void gdc()
{
    int num1, num2;
    int gdc;
    cin >> num1 >> num2;
    int i;
    for ( i = 1; i <= min(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gdc = i;
        }
    }
    cout<<gdc;
}

int main()
{
    gdc();
}