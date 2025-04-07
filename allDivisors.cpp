
#include <iostream>
#include <vector>

using namespace std;

void AllDivisors()
{
    int num;
    cin >> num;
    vector<int> arr;
    int i;
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            arr.push_back(i);
        }
    }
    for (int divisor : arr)
    {
        cout << divisor << " ";
    }
}

int main()
{
    AllDivisors();
}