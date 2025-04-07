
#include <iostream>
using namespace std;

void Armstrong()
{
    int n;
    cin >> n;
    int rem;
    int initial = n;
    int arm = 0;
    while(n>0){
        rem = n % 10;
        n = n /10;
        arm = (rem*rem*rem) + arm;
    }
    if(initial == arm ){
        cout<<"armstrong";
    }else{
        cout<<"Not armstrong";
    }
}

int main()
{
    Armstrong();
}