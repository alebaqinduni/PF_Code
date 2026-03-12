#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number(0-1000): ";
    cin>>number;
    int teens = number % 100;
    int ones= number % 10;
    int tens = (number / 10) % 10;
    int thousand = number / 1000;
    int hundreds = (number / 10) / 10;

     cout<<"Tens: "<<tens<<endl;
    cout<<"Ones: "<<ones<<endl;
    cout<<"In words: ";
    if(number>=20 && number<=1000)
    {
        if(number==1000){cout<<"One thousand";}
        if(hundreds==1){cout<<"One hundred";}
        if(hundreds==2){cout<<"Two hundred";}
       if(hundreds==3){cout<<"Three hundred";}
        if(hundreds==4){cout<<"Four hundred";}
       if(hundreds==5){cout<<"Five hundred";}
        if(hundreds==6){cout<<"Six hundred";}
       if(hundreds==7){cout<<"Seven hundred";}
        if(hundreds==8){cout<<"Eight hundred";}
       if(hundreds==9){cout<<"Nine hundred";}         if(teens==10){cout<<"Ten";}
        if(teens==11){cout<<"Eleven";}
        if(teens==12){cout<<"Twelve";}
        if(teens==13){cout<<"Thirteen";}
        if(teens==14){cout<<"Fourteen";}
        if(teens==15){cout<<"Fifteen";}
        if(teens==16){cout<<"Sixteen";}
        if(teens==17){cout<<"Seventeen";}
        if(teens==18){cout<<"Eighteen";}
       if(teens==19){cout<<"Nineteen";}
       if(tens==2){cout<<" Twenty";}
       if(tens==3){cout<<" Thirty";}
       if(tens==4){cout<<" Forty";}
        if(tens==5){cout<<" Fifty";}
       if(tens==6){cout<<" Sixty";}
        if(tens==7){cout<<" Seventy";}
       if(tens==8){cout<<" Eighty";}
        if(tens==9){cout<<" Ninety";}
         if(ones==1){cout<<" One";}
        if(ones==2){cout<<" Two";}
        if(ones==3){cout<<" Three";}
        if(ones==4){cout<<" Four";}
        if(ones==5){cout<<" Five";}
        if(ones==6){cout<<" Six";}
        if(ones==7){cout<<" Seven";}
        if(ones==8){cout<<" Eight";}
        if(ones==9){cout<<" Nine";}
    }
    return 0;
}