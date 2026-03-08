#include<iostream>
using namespace std;
int main(){
    int red_roses, white_roses, tulip;
    float price;
    cout<<"Enter number of red roses: ";
    cin>>red_roses;
    price=red_roses*2.00;
    cout<<"Enter number of white roses: ";
    cin>>white_roses;
    price+=white_roses*4.10;
    cout<<"Enter number of tulips: ";
    cin>>tulip;
    price+=tulip*2.50;
    cout<<"Total price is: "<<price<<endl;
    if(price>200){
    cout<<"Total price after discount is: "<<price-price*0.2<<endl;}
    else{
        cout<<"No discount applied!"<<endl;
    }
    return 0;
}