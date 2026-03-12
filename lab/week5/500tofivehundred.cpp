#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a Number(0-500): ";
    cin>>number;
    int ones=number % 10;
    int tens=(number/10) % 10;
    int hundreds=number/100;
    cout<<"Hundreds: "<<hundreds<<endl;
    cout<<"Tens: "<<tens<<endl;
    cout<<"Ones: "<<ones<<endl;
    if(number>=20 && number<=500){
      if(hundreds==5){cout<<" Five hundred";}
      if(hundreds==4){cout<<" Four hundred";}
      if(hundreds==3){cout<<" Three hundred";}
      if(hundreds==2){cout<<" Two hundred";}
      if(hundreds==1){cout<<" One hundred";}
      if(tens==9){cout<<" Ninety";}
      if(tens==8){cout<<" Eighty";}
      if(tens==7){cout<<" Seventy";}
      if(tens==6){cout<<" Sixty";}
      if(tens==5){cout<<" Fifty";}
      if(tens==4){cout<<" Forty";}
      if(tens==3){cout<<" Thirty";}
      if(tens==2){cout<<" Twenty";}
      if(tens==1){cout<<" Ten";}
     if(ones==9){cout<<" Nine";}
     if(ones==8){cout<<" Eight";}
     if(ones==7){cout<<" Seven";}
     if(ones==6){cout<<" Six";}
     if(ones==5){cout<<" Five";}
     if(ones==4){cout<<" Four";}
     if(ones==3){cout<<" Three";}
     if(ones==2){cout<<" Two";}
     if(ones==1){cout<<" One";}
     if(number==0){cout<<" Zero";}

    }
    
    
    return 0;
}