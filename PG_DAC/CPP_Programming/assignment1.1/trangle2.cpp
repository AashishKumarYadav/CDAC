// 12. WAP to calculate the area of Triangle.

#include<bits/stdc++.h>
using namespace std;

int main() {
    
    double base, height, area;

    cout<<"Enter the base of the triangle: ";
    cin>>base;

    cout<<"Enter the height of the triangle: ";
    cin>>height;

    area = (base*height)/2;

    cout<<"The area of the triangle is: "<<area<<endl;

    return 0;
}

/* 
input -
Enter the base of the triangle: 5
Enter the height of the triangle: 10
output -
The area of the triangle is: 25
*/