#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st digit: ";
    cin>>a;
    cout<<"Enter 2nd digit: ";
    cin>>b;
     cout<<"Enter 3rd digit: ";
    cin>>c;
    if(a<b && a<c){
        cout<<"Least number is: "<<a;
    }
    else if(b<a && b<c){
        cout<<"Least number is: "<<b;
    }
    else{
        cout<<"Least number is: "<<c;
    }
}