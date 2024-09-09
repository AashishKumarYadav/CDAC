// 15. WAP to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km)
// and spent fuel.
// Test Data:
// Input total distance in km: 350 
// Input total fuel spent in litres: 5 
// Expected Output:
// Average consumption (km/lt) 70.00

#include<bits/stdc++.h>
using namespace std;

int main() {

    int totalDistance;
    float totalFuel, averageConsumption;

    cout << "Input total distance in km: ";
    cin >> totalDistance;

    cout << "Input total fuel spent in litres: ";
    cin >> totalFuel;

    averageConsumption = totalDistance / totalFuel;

    cout << "Average consumption (km/lt) = " << averageConsumption << endl;

    return 0;
}

// Output as Expected - Average consumption (km/lt) = 70