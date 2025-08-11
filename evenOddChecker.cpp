//23303
//even odd number checker
#include<iostream>
using namespace std;

void checker(int a){
    if(a%2==0){
        cout<<"Number is even !!"<<endl;
    }
    else{
        cout<<"Number is odd !!"<<endl;
    }
}

int input(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    return x;
}

int main(){
    checker(input());
    return 0;
}