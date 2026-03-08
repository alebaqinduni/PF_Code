#include<iostream>
using namespace std;
int main(){
    int speed;
    string speed_information;
    cout<<"Enter your speed: ";
    cin>>speed;
    if(speed==10){
        cout<<"Slow";
    }
    else if(speed>10 && speed<=50){
        cout<<"Average";
    }
    else if(speed>50 && speed<=150){
        cout<<"Fast";
    }
    else if(speed>150 && speed<=1000){
     cout<<"Ultra Fast";
    }
    else{
        cout<<"Extremely Fast";
    }
    return 0;
}