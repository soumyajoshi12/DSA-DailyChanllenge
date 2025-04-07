
#include <iostream>
using namespace std;

void Pallindrome()
{
    int num;
    int reverse = 0;
    cin >> num;
    int initial = num;
    while (num > 0)
    {
        int rem = num % 10;
        reverse = (reverse * 10) + rem;
        num = num / 10;
    }
   if(reverse == initial){
    cout<<"Number is Pallindrome";
   }else{
    cout<<"Number is not Pallindrome";
   }
}

int main()
{
    Pallindrome();
}