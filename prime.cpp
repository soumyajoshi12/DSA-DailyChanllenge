
#include <iostream>
#include <vector>

using namespace std;

void Prime()
{
    int num;
    cin >> num;
    int i;
    int flag=0;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag=1;
            break;
        }
    }
    if(flag == 0 ){
        cout<<"prime";
    }else{
        cout<<"Not prime";
    }
}

int main()
{
    Prime();
}