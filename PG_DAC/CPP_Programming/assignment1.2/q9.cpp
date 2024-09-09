// 9. WAP to calculate factorial of a number.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num; cin>>num;

    int fact = 1;
    for(int i=1;i<=num;i++){
        fact *= i;
    }

    cout<<fact<<endl;

    return 0;
}

// input - 5
// output - 120