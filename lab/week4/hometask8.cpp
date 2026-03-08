#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number(0-100): ";
    cin>>num;
    string words[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    string teens[]={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    string tens[]={"","", "Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    string word;
    if(num<10){
        cout<<words[num]<<endl;
    }
    else if(num<20){
        cout<<teens[num-10]<<endl;
    }
    else if(num<100){cout<<tens[num/10]<<(num%10 ? "-"+words[num%10] : "")<<endl;
    }
    else if(num==100){
        cout<<"One Hundred"<<endl;
    }
    else{
        cout<<"Number out of range!"<<endl;
    }
    return 0;
}