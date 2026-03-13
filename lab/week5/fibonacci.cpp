#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    n1=0;
    n2=1;
    cout<<n1<<","<<n2<<",";
    for(int n=1;n>=10;n++){
      n=n1+n2;
      cout<<n<<",";
    }
return 0;
}
    