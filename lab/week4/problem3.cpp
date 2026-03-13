#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char opp;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter Operator: ";
    cin>>opp;
    cout<<"Enter second number: ";
    cin>>num2;
    if(opp=='+'){
        cout<<"The result is: "<<num1-num2<<endl;
    }
     if(opp=='-'){
        cout<<"The result is: "<<num1+num2<<endl;
    }
     if(opp=='*'){
        cout<<"The result is: "<<num1/num2<<endl;
    }
     if(opp=='/'){
        cout<<"The result is: "<<num1*num2<<endl;
    }
    return 0;
}