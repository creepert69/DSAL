//23303
//leap year checkers
#include<iostream>
using namespace std;

void checker(int a){
    if(a%4==0){
        cout<<"Year is a leap year !!"<<endl;
    }
    else{
        cout<<"Year is not a leap year !!"<<endl;
    }
}

int input(){
    int x;
    cout<<"Enter a year : ";
    cin>>x;
    return x;
}

int main(){
    checker(input());
    return 0;
}