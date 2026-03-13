#include<iostream>
using namespace std;
int main(){
    char character;
    cout<<"Enter Single Character: ";
    cin>>character;
    if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u'||
          character=='A' || character=='E' || character=='I' || character=='O' || character=='U')
          {
        cout<<"It is a vowel!";
    }

    else if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')){
        cout<<"It is a consonant!";
    }
    else if(character >= '0' && character <= '9'){
        cout<<"It is a number!";
    }
    return 0;
}