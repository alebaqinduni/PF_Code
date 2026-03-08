#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second digit: ";
    cin>>b;
    cout<<"Enter third digit: ";
    cin>>c;
    if(a>b && a>c){
        cout<<"The greatest number is: "<<a;
    }
    else if(b>c && b>a){
        cout<<"The greatest number is: "<<b;

    }
    else{
        cout<<"The greatest number is: "<<c;
    }
    }