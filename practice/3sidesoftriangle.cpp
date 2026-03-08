#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st side of triangle: ";
    cin>>a;
    cout<<"Enter 2nd side of triangle";
    cin>>b;
    cout<<"Enter 3rd side of triangle";
    cin>>c;
    if((a+b)>c && (a+c)>b && (b+c)>a){
        cout<<"This is a valid triangle";

    }
    else{
        cout<<"This is not a valid triangle";
    }
}