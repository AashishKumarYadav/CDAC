// 9. WAP to calculate factorial of a number. (Using function)

#include<bits/stdc++.h>
using namespace std;

int func(int num){

    int fact = 1;
    for(int i=1;i<=num;i++){
        fact *= i;
    }

    return fact;
}

int main(){

    int num; cin>>num;

    cout<<func(num)<<endl;

    return 0;
}

// input - 5
// output - 120