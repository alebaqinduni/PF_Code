#include <iostream>
using namespace std;
int main(){
    string pass="abc123";
    string pass1;
    cout<<"Enter a Password: ";
    cin>>pass1;
    if(pass==pass1){
        cout<<"Input matches password!";
    }
    else{
        cout<<"GO AWAY LIL PUNK!!!";
    }
    return 0;
}