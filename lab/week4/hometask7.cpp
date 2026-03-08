#include<iostream>
using namespace std;
int main(){
    int A;
    float length,area,width,radius,base,base2;
    cout<<"Enter Geometrical figure: "<<endl;
    cout<<"1. Square"<<endl;
    cout<<"2. Rectangle"<<endl;
    cout<<"3. Circle"<<endl;
    cout<<"4. Triangle"<<endl;
    cin>>A;
    if(A==1){
        cout<<"Enter length of its side: ";
        cin>>length;
        cout<<"Area is: "<<length*length<<endl;
    }
    else if(A==2){
        cout<<"Enter length of its side: ";
        cin>>length;
        cout<<"Enter width of its side: ";
        cin>>width;
        cout<<"Area is: "<<length*width<<endl;
    }
     else if(A==3){
        cout<<"Enter radius of circle: ";
        cin>>radius;
        cout<<"Area is: "<<3.1415*radius*radius<<endl;
    }
    else {
        cout<<"Enter length of base: ";
        cin>>base;
         cout<<"Enter length of height: ";
        cin>>base2;
        cout<<"Area is: "<<0.5*base*base2<<endl;
    }
    return 0;
}