
#include <iostream>
using namespace std;

void Count()
{
    int num;
    cin >> num;
    int digit=0;
    if (num == 0) {
        cout << 1;
    }
    while (num > 0)
    {
        digit++;
        num = num / 10;
    }
    cout << digit;
}

int main()
{
    Count();
}