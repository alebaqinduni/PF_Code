#include<iostream>
using namespace std;
int main(){
    int speed;
    cout<<"Your car's speed is: ";
    cin>>speed;
    if(speed>100){
     cout<<"YOU WILL BE CHALLANED !!! "<<endl;
    }
    else {
        cout<<"You're going good!";
    }
    return 0;
}