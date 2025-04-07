
#include <iostream>
using namespace std;

void Reverse()
{
    int num;
    int reverse = 0;
    cin >> num;
    while (num > 0)
    {
        int rem = num % 10;
        reverse = (reverse * 10) + rem;
        num = num / 10;
    }
    cout << reverse;
}

int main()
{
    Reverse();
}