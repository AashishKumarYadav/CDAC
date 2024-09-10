// 14. WAP to print the Fibonacci series in a given range. (Using Function)

#include<bits/stdc++.h>
using namespace std;

void func(int num){

    int first = 0;
    int second = 1;

    int sum = 0;
    int cnt = 0;

    while(cnt!=num){
        cout<<sum<<" ";
        first = second;
        second = sum;
        sum = first + second;
        cnt++;
    }
    
}

int main(){

    int num; cin>>num;

    func(num);

    return 0;
}

// input - 15
// output - 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377