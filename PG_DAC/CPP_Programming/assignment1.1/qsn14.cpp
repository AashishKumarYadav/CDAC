// 14. WAP for two item’s weight (floating points&#39; values) and number of purchase (floating points&#39; values) and
// calculate the average value of the items.
// Test Data:
// Weight - Item1: 15
// No. of item1: 5 
// Weight - Item2: 25 
// No. of item2: 4 
// Expected Output:
// Average Value = 19.444444

#include<bits/stdc++.h>
using namespace std;

int main() {

    float weightItem1, weightItem2;
    float numItem1, numItem2;
    float totalWeight, totalItems, averageValue;

    cout << "Weight - Item1: ";
    cin >> weightItem1;
    cout << "No. of item1: ";
    cin >> numItem1;

    cout << "Weight - Item2: ";
    cin >> weightItem2;
    cout << "No. of item2: ";
    cin >> numItem2;

    totalWeight = (weightItem1 * numItem1) + (weightItem2 * numItem2);
    totalItems = numItem1 + numItem2;

    averageValue = totalWeight / totalItems;

    cout << "Average Value = " << averageValue << endl;

    return 0;
}

//Output as Expected - Average Value = 19.444444