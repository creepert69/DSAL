#include<iostream>
#include<string>
using namespace std;

void checker(string stringV){
    int x =  stringV.length();
    bool isTrue[x];
    for(int b = 0;b<x;b++){
        for(int i=0;i<x;i++){
            for(int j=x;j>0;j--){
                if(stringV[i]==stringV[j]){
                    isTrue[b] = true;
                }
                else{
                    isTrue[b] == false;
                    cout<<endl<<"Given Word is not a pallindrome !!";
                    return;
                }
            }
        }
    }

    cout<<"Given word is a pallindrome !!"<<endl;
    return;
    
}

int main(){
    string str;
    cin>>str;
    checker(str);
    return 0;
}