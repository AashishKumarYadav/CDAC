// 13. WAP to calculate Area and Circumference of Circle.

#include<bits/stdc++.h>
using namespace std;

int main() {

    double radius, area, circumference;

    cout<<"Enter the radius of the circle: ";
    cin>>radius;

    area = M_PI*pow(radius,2);

    circumference = 2*M_PI*radius;

    cout<<"The area of the circle is: "<<area<<endl;
    cout<<"The circumference of the circle is: "<<circumference<<endl;

    return 0;
}

/*
input -
Enter the radius of the circle: 4
The area of the circle is: 50.2655
output - 
The circumference of the circle is: 25.1327
*/