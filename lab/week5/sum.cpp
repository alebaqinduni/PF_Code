// #include<iostream>
// using namespace std;
// int main(){
//     int number;
//     cout<<"Enter any 5 numbers: ";
//     int n1, n2, n3, n4, n5;
//     cin>>n1>>n2>>n3>>n4>>n5;
//     int sum = n1 + n2 + n3 + n4 + n5;
//     cout<<"The sum of the 5 numbers is: "<<sum<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0; // Initialize sum to 0

    cout << "Enter 5 numbers:" << endl;

    for(int i = 0; i < 5; i++) {
        cin >> num;
        sum += num; // Add current number to sum
    }

    cout << "The sum of the 5 numbers is: " << sum << endl;

    return 0;
}
