#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number that will be the nth digit of the series : ";
    int x;
    cin>>x;
    int array[x];
    array[0] = 0; array[1] = 1;
    for (int i=2;i<x;i++){
        array[i] = array[i-1]+array[i-2];
    }
    for (int i=0;i<x;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}