#include <iostream>
using namespace std;

int main() {
    int num, n1, n2;
    cin >> num;

    if(num < 0 || num > 100){
        cout << "Enter a valid number";
        return 0;
    }

    if(num == 100){
        cout << "one hundred";
        return 0;
    }

    n1 = num / 10;
    n2 = num % 10;

    // tens
    if(n1 == 2) cout << "twenty ";
    else if(n1 == 3) cout << "thirty ";
    else if(n1 == 4) cout << "forty ";
    else if(n1 == 5) cout << "fifty ";
    else if(n1 == 6) cout << "sixty ";
    else if(n1 == 7) cout << "seventy ";
    else if(n1 == 8) cout << "eighty ";
    else if(n1 == 9) cout << "ninety ";

    // special case 10-19
    if(n1 == 1){
        if(n2 == 0) cout << "ten";
        else if(n2 == 1) cout << "eleven";
        else if(n2 == 2) cout << "twelve";
        else if(n2 == 3) cout << "thirteen";
        else if(n2 == 4) cout << "fourteen";
        else if(n2 == 5) cout << "fifteen";
        else if(n2 == 6) cout << "sixteen";
        else if(n2 == 7) cout << "seventeen";
        else if(n2 == 8) cout << "eighteen";
        else if(n2 == 9) cout << "nineteen";
        return 0;
    }

    // ones
    if(n2 == 1) cout << "one";
    else if(n2 == 2) cout << "two";
    else if(n2 == 3) cout << "three";
    else if(n2 == 4) cout << "four";
    else if(n2 == 5) cout << "five";
    else if(n2 == 6) cout << "six";
    else if(n2 == 7) cout << "seven";
    else if(n2 == 8) cout << "eight";
    else if(n2 == 9) cout << "nine";

    return 0;
}









// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cin >> num;

//     string ones[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
//     string teens[] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
//     string tens[] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

//     if(num < 0 || num > 100){
//         cout << "Enter number between 0 and 100";
//         return 0;
//     }

//     if(num < 10)
//         cout << ones[num];

//     else if(num < 20)
//         cout << teens[num - 10];

//     else if(num < 100){
//         cout << tens[num / 10];
//         if(num % 10 != 0)
//             cout << " " << ones[num % 10];
//     }

//     else
//         cout << "one hundred";

//     return 0;
// // }