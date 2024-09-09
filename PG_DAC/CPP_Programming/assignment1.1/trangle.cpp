// 4. Write a program that takes three input of sides of a triangle. The program should indicate whether the
// triangle would be formed or not. If it can be formed it also indicates the type.

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    double side1, side2, side3;

    cout << "Enter the length of the first side: ";
    cin >> side1;
    cout << "Enter the length of the second side: ";
    cin >> side2;
    cout << "Enter the length of the third side: ";
    cin >> side3;

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        cout << "The sides can form a triangle." << endl;
        if(side1 == side2 && side2 == side3){
            cout << "It is an Equilateral triangle." << endl;
        } 
        else if (side1 == side2 || side2 == side3 || side1 == side3){
            cout << "It is an Isosceles triangle." << endl;
        }
        else{
            cout << "It is a Scalene triangle." << endl;
        }
    }
    else{
        cout << "The sides cannot form a triangle." << endl;
    }

    return 0;
}

/*
input -
Enter the length of the first side: 33
Enter the length of the second side: 22
Enter the length of the third side: 22
output -
The sides can form a triangle.
It is an Isosceles triangle.
*/
