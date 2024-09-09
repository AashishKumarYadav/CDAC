// 9. WAP for finding remainder of division of 2 numbers.
#include<bits/stdc++.h>
using namespace std;

int main() {

    int num1, num2, remainder;

    cout<<"Enter the first number (dividend): ";
    cin>>num1;

    cout<<"Enter the second number (divisor): ";
    cin>>num2;

    remainder = num1 % num2;

    cout<<"remainder is "<<remainder<<endl;

    return 0;
}

//Output -
// Enter the first number (dividend): 5
// Enter the second number (divisor): 2
// remainder is 1