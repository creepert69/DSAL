#include<iostream>
#include<cstring>
#include <bits/stdc++.h>
#include<typeinfo>
using namespace std;

int main(){
    string s = "Bhavesh";
    string t = "Bhavesh1";

    hash<string> h;

    cout<<s<<endl;
    cout<<h(s)<<endl;
    cout<<h(t)<<endl;
    cout<<typeid(h(t)).name()<<endl;
}