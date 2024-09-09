// 2. Write a program that generate the following output
// 10, 20, 19
// Use an integer constant for 10, an arithmetic C++ ASSIGNMENT operator to generate the 20, and a
// decrement operator to generate 19.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 10;
    cout<<num<<endl;

    num *= 2;
    cout<<num<<endl;

    num--;
    cout<<num<<endl;

    return 0;
}

// Output - 10, 20, 19