#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    if(num%2==0){
        cout<<"It is an Even Number!"<<endl;
    }
    else{
        cout<<"It is an Odd Number!"<<endl;
    }
    return 0;
}