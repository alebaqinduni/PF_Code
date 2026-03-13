#include<iostream>
using namespace std;
int main(){
    string w1,w2;
    cout<<"Enter Word 1: ";
    cin>>w1;
    cout<<"Enter Word 2; ";
    cin>>w2;
    if(w1==w2 || w2==w1){
        cout<<"Yes,the words are same!";
    }
    if(w1!=w2){
        cout<<"No,the words are not same!";
    }
    return 0;
}