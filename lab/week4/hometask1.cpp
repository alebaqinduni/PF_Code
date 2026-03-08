#include<iostream>
using namespace std;
int main(){
    string name,ireland;
    int price,discount,final_price;
    cout<<"We are giving discounts so,check your eligibility!"<<endl;
    cout<<"Your Country Name: ";
    cin>>name;
    cout<<"Enter ticket price in dollars: ";
    cin>>price;
    if(name==ireland){
        cout<<"Your discount on ticket is 10%!Yay"<<endl;
        discount=price*0.1;
        final_price=price-discount;
        cout<<"Your discounted price is: "<<discount<<endl;

        cout<<"Your final ticket price in dollars is: "<<final_price-discount;

    }
    else{
        cout<<"Your discount on ticket is 5%!Yay"<<endl;
        discount=price*0.05;
        final_price=price-discount;
        cout<<"Your discounted price is: "<<discount<<endl;
        cout<<"Your final ticket price in dollars is: "<<final_price;

    }
   return 0;
}