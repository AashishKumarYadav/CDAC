//11. Write a program in C to calculate the square of the number using inline functions and macros both.

#include<bits/stdc++.h>
using namespace std;

inline int squareIn(int x) {
    return x * x;
}

#define SQUARE(x) (x * x)

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int squareInline = squareIn(num);
    cout<<"Square using inline function: "<<squareInline<<endl;

    int squareMacro = SQUARE(num);
    cout<<"Square using macro: "<<squareMacro<< endl;

    return 0;
}

/*
input -
Enter a number: 5

output -
Square using inline function: 25
Square using macro: 25
*/