#include<iostream>
using namespace std;
int main(){
    int price;
    cout<<"Enter the price of dress: ";
    cin>>price;
    if(price>=1500){
        cout<<"Don't buy the dress!"<<endl;
    }
    else{
        cout<<"Buy the dress!"<<endl;
    }
    return 0;
}