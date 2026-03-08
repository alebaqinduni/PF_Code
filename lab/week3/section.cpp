#include <iostream>
#include <string>
using namespace std;

int main(){
  int roll_no;
  string name,section;
  float aggregate;
  cout<<"Enter your name: "; 
  cin>> name;
  cout<<"Enter your Roll no: ";
  cin>> roll_no;
  cout<<"Enter your aggregate: "; 
  cin>> aggregate;
  cout<<"Enter your section: "; 
  cin>> section;
  cout<<"Result is: "<<endl;
  cout<< "Your name is:"<< name<<endl;
  cout<< "Your RollNo is:"<< roll_no<<endl;
  cout<< "Your aggregate is:"<< aggregate<<endl;
  cout<< "Your section is:"<< section<<endl;
};