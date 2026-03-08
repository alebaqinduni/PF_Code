#include<iostream>
using namespace std;
int main(){
    int holidays;
    cout<<"Enter number of holidays: ";
    cin>>holidays;
    int difference=365-holidays;
    if(holidays>20){
        cout<<"Tom will run away"<<endl;
    }
    else{
        cout<<"Tom sleeps well"<<endl;
    }
    int total_time=difference*63+holidays*127;
    int diff = 30000 - total_time;
    int hours=diff/60;
    int minutes=diff%60;
    if(holidays)
    cout<<"Tom needs to play "<<hours<<" hours and "<<minutes<<" minutes more!"<<endl;
}