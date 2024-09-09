// 18. WAP to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary &lt;= 10000 : HRA = 20%, DA = 80%
// Basic Salary &lt;= 20000 : HRA = 25%, DA = 90%
// Basic Salary &gt; 20000 : HRA = 30%, DA = 95%

#include<bits/stdc++.h>
using namespace std;

int main() {
    float basicSalary, HRA, DA, grossSalary;

    cin >> basicSalary;

    if (basicSalary <= 10000) {
        HRA = 0.20 * basicSalary;
        DA = 0.80 * basicSalary;
    } else if (basicSalary <= 20000) {
        HRA = 0.25 * basicSalary;
        DA = 0.90 * basicSalary;
    } else {
        HRA = 0.30 * basicSalary;
        DA = 0.95 * basicSalary;
    }

    grossSalary = basicSalary + HRA + DA;

    cout << "Gross Salary = " << grossSalary << endl;

    return 0;
}

/*
input -
20000
output -
Gross Salary = 43000
*/
