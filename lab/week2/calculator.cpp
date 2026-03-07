#include <iostream>
using namespace std;
int main(){
int num1 , num2;
int result;
char opp;

    cout<<"Enter first number: ";
    cin>>num1;

    cout<<"Enter Operator";
    cin>>opp;

    cout<<"Enter second number: ";
    cin>>num2;

    if(opp=='+'){
        result=num1 + num2;
    }
    else if(opp=='-'){
        result=num1-num2;
    }
    else if(opp=='/'){
        result=num1/num2;
    }
    else{
        result=num1*num2;
    }
    cout<<"The result is: "<<result<<endl;
    return 0;

}
