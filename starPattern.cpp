// // 1.
// #include <iostream>
// using namespace std;

// int main(){
//     for(int i =0 ; i<=5; i++){
//         for(int h =0 ; h<=5; h++){
//             cout<<"*";
//         }
//         cout<< " "<< endl;
//     }
//     return 0;
// }

// // 2.
// #include <iostream>
// using namespace std;

// int main(){
//     for(int i =0 ; i<=5; i++){
//         for(int h =0 ; h<=i; h++){
//             cout<<"*";
//         }
//         cout<< " "<< endl;
//     }
//     return 0;
// }

// // 3.
// #include <iostream>
// using namespace std;

// int main(){
//     for(int i =5 ; i>=0; i--){
//         for(int h =0 ; h<=i; h++){
//             cout<<"*";
//         }
//         cout<< " "<< endl;
//     }
//     return 0;
// }

// // 4.
// #include <iostream>
// using namespace std;

// int main(){
//     for(int i =0 ; i<=5; i++){
//         for(int h =0 ; h<=5-i-1; h++){
//             cout<<" ";
//         }
//         for(int k =0 ; k<2*i + 1; k++){
//             cout<<"*";
//         }
//         cout<< " "<< endl;
//     }
//     return 0;
// }

// // 5.
// #include <iostream>
// using namespace std;

// int main(){
//     for(int i =0 ; i<=5; i++){
//         for(int h =0 ; h<i; h++){
//             cout<<" ";
//         }
//         for(int k =0 ; k<10 - (2*i+1); k++){
//             cout<<"*";
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
//     for (int i = 0; i <= 5; i++)
//     {
//         for (int h = 0; h <= 5 - i - 1; h++)
//         {
//             cout << " ";
//         }
//         for (int k = 0; k < 2 * i + 1; k++)
//         {
//             cout << "*";
//         }
//         cout << " " << endl;
//     }
//     for (int i = 0; i <= 5; i++)
//     {
//         for (int h = 0; h <= i; h++)
//         {
//             cout << " ";
//         }
//         for (int k = 0; k < 10 - (2 * i + 1); k++)
//         {
//             cout << "*";
//         }
//         cout << " " << endl;
//     }
//     return 0;
// }

// // 7.
// #include <iostream>
// using namespace std;

// int main(){
//     for(int i =0 ; i<=5; i++){
//         for(int h =0 ; h<i; h++){
//             cout<<" ";
//         }
//         for(int k =0 ; k<10 - (2*i+1); k++){
//             cout<<"*";
//         }
//         cout<< " "<< endl;
//     }
//     return 0;
// }

// // 8.
// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int k = 5; k >= i; k--)
//         {
//             cout << "*";
//         }
//         for (int k = 0; k < 2 * i - 2; k++)
//         {
//             cout << " ";
//         }
//         for (int k = 5; k > i - 1; k--)
//         {
//             cout << "*";
//         }

//         cout << " " << endl;
//     }
//     for (int i = 5; i >= 1; i--)
//     {
//         for (int k = 0; k <= 5 - i; k++)
//         {
//             cout << "*";
//         }
//         for (int k = 2 * i - 2; k > 0; k--)
//         {
//             cout << " ";
//         }
//         for (int k = 0; k <= 5 - i; k++)
//         {
//             cout << "*";
//         }
//         cout << " " << endl;
//     }
//     return 0;
// }

// // 9.
// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int k = 0; k < 5; k++)
//         {
//             if (i == 0 || k == 0 || i == 4 || k == 4)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }
