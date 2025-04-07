// 1.
#include <iostream>
using namespace std;

void pattern1(){
    for(int i =1 ; i<=5; i++){
        for(char k ='A' ; k< 'A'+i; k++){
            cout<<k;
        }
        cout<< " "<< endl;
    }
}

void pattern2(){
    for(int i =1 ; i<=5; i++){
        for(char k ='A' ; k<='F'-i; k++){
            cout<<k;
        }
        cout<< " "<< endl;
    }
}

void pattern3(){
    char alpha ='A';
    for(int i =1 ; i<=5; i++){
        for(char k =1 ; k<=i; k++){
            cout<<alpha ;
        }
        alpha++;
        cout<< " "<< endl;
    }
}

void pattern4(){
    for(int i=0;i<5;i++){
        for(char ch =('A'+4)-i;ch<=('A'+4);ch++){
            cout<<ch;
        }
        cout<< " "<< endl;
    }
}



int main(){
    pattern4();
}