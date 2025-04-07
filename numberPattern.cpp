// 1.
// #include <iostream>
// using namespace std;

// int main(){
//     for(int i =1 ; i<=5; i++){
//         for(int k =1 ; k<= i; k++){
//             cout<<k;
//         }
//         cout<< " "<< endl;
//     }
//     return 0;
// }

// 2.
// #include <iostream>
// using namespace std;

// int main(){
//     for(int i =1 ; i<=5; i++){
//         for(int k =1 ; k<= i; k++){
//             cout<<i;
//         }
//         cout<< " "<< endl;
//     }
//     return 0;
// }

// 3.
// #include <iostream>
// using namespace std;

// int main(){
//     for(int i =5 ; i>=1; i--){
//         for(int k =1 ; k<= i; k++){
//             cout<<k;
//         }
//         cout<< " "<< endl;
//     }
//     return 0;
// }

// 4.
// #include <iostream>
// using namespace std;

// int main(){
//     for(int i =1 ; i<=5; i++){
//         for(int k =1 ; k<= i; k++){
//             cout<<k;
//         }
//         cout<< " "<< endl;
//     }
//     return 0;
// }

// // 5.
// #include <iostream>
// using namespace std;

// int main(){
//     for(int i =4 ; i>0; i--){
//         for(int k =1 ; k<=5-i ; k++){
//             cout<<k;
//         }
//         for(int k =2*i-2 ; k>= 1; k--){
//             cout<<"+";
//         }
//         for(int k =5-i ; k>= 1; k--){
//             cout<<k;
//         }
//         cout<< " "<< endl;
//     }
//     return 0;
// }

// // 6.
// #include <iostream>
// using namespace std;

// int main()
// {
//     int t = 1;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int k = 1; k <= i; k++)
//         {
//             cout << t << " ";
//             t++;
//         }
//         cout << " " << endl;
//     }
//     return 0;
// }

// 7.
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == 1 || j == 1 || i==7 || j==7)
            {
                cout << "4 ";
            }
            else if (i == 2 || j == 2 || i==6 || j==6)
            {
                cout << "3 ";
            }
            else if (i == 3 || j == 3 || i==5 || j==5)
            {
                cout << "2 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << " " << endl;
    }
    return 0;
}