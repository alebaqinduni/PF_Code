#include<iostream>
using namespace std;
int main(){
    int price,discount;
    cout<<"Enter the price in medical store: ";
    cin>>price;
    if(price<=5000){
        cout<<"Discount=5%"<<endl;
        discount=price*0.05;
        cout<<discount<<" is your discount in rs!"<<endl;
        cout<<price-discount<<" is your payable amount!";
    }
    else if(price>5000) {
        cout<<"Discount=10%"<<endl;
        discount=price*0.1;
       cout<<discount<<" is your discount in rs!"<<endl;
       cout<<price-discount<<" is your payable amount!";

    }
    return 0;
}