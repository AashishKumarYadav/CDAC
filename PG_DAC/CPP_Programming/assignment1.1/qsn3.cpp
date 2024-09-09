// 3. Write a program that asks the user to enter a radius value and then compute the volume of a sphere with the
// input radius.
#include <bits/stdc++.h>
using namespace std;

int main() {

    double radius;
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Formula: (4/3) * pi * r^3
    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    cout << "The volume of the sphere with radius " << radius << " is: " << volume << endl;

    return 0;
}
