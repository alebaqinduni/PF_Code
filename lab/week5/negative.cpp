#include<iostream>
using namespace std;
int main(){
    int number;
    int sum=0;
    cout<<"Enter a number: ";
    for(int x=-1;x<5;x++){
         cin>>number;
         sum+=number;
        cout<<"The sum of number is: "<<number<<endl;
      return 0;
    }
    if(number==-1){
         return 1;
    }
     
}