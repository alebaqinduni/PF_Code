#include<iostream>
using namespace std;
int main(){
    int multiple,table;
    cout<<"Enter which table to write: ";
    cin>>table; 
    for(int x=1;x<=10;x++){
        multiple=table*x;
        cout<<table<<"*"<<x<<"="<<multiple<<endl;
    }
    return 0;
}