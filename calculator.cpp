//23303
//program to accept two numbers from the user and perform subtraction, multiplication, division, addition of four numbers. multiplication of 3 numbers and use a switch cas to give a choice to the user, repeat the switch case to apply different operations on the same number

#include<iostream>
using namespace std;

int multiplication(int a, int b){
    return a*b;
}
int division(int a, int b){
    if(b==0){
        cout<<"Division is invalid !!"<<endl;
        return 0;
    }
    else{
        return a/b;
    }
}
int addition(int a, int b){
    return a+b;
}

int main(){
    cout<<"Enter the number of numbers on which an operation is to be performed : ";
    int n;
    cin>>n;
    cout<<"Enter operation to be performed : \n    1.Addition\n    2.Subtraction\n    3.Multiplication\n    4.Division"<<endl;
    int op;
    cin>>op;

    int numbers[n];
    for(int i=0;i<n;i++){
        if (n>2 && op==4){
            cout<<"Division is only possible with 2 numbers !!"<<endl;
            return 0;
        }
        else{
            cout<<endl<<"Enter the "<<i+1<<" number :";
            cin>>numbers[i];
        }
    }
    for(int i=0;i<n;i++){
        switch (op)
        {
        case 1:
            numbers[i+1] = addition(numbers[i],numbers[i+1]);
            break;
        case 2:
            numbers[i+1] = addition(numbers[i],(numbers[i+1]*(-1)));
            break;
        case 3:
            numbers[i+1] = multiplication(numbers[i],numbers[i+1]);
            break;
        case 4:
            numbers[i+1] = division(numbers[i],numbers[i+1]);
            break;
        
        default:
            cout<<"OPERATION INVALID"<<endl;
            break;
        }

        if(i==n-1){
            cout<<numbers[i]<<" is the answer"<<endl;
        }

    }

    return 0;
}