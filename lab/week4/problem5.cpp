#include<iostream>
using namespace std;
int main(){
    int age1,age2,age3;
    string name1,name2,name3;
    cout<<"Enter age of 1st brother: ";
    cin>>age1;
    cout<<"Enter age of 2nd brother: ";
    cin>>age2;
    cout<<"Enter age of 3rd brother: ";
    cin>>age3;
    cout<<"Enter name of 1st brother: ";
    cin>>name1;
    cout<<"Enter name of 2nd brother: ";
    cin>>name2;
    cout<<"Enter name of 3rd brother: ";
    cin>>name3;
    if(age1<age2 || age2>age3 ){
        cout<<"The Youngest Brother is: "<<name1<<endl;
    }
    else if(age2>age1 || age3<age1){
        cout<<"The Youngest Brother is: "<<name3<<endl;
    }
    else {
        cout<<"The Youngest Brother is: "<<name2<<endl;
    }

    return 0;
}