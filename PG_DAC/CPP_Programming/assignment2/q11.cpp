// 11. WAP to print all digits of a number and their sum. (Using Function)

#include<bits/stdc++.h>
using namespace std;

int func(int num){

    int sum = 0;
    
    cout<<"Digits are: ";
    while(num>0){
        int lastD = num%10;
        cout<<lastD<<" ";
        sum += lastD;
        num = num/10; 
    }

    return sum;
}

int main(){

    int num; cin>>num;

    int s = func(num);

    cout<<"and sum is "<<s<<endl;

    return 0;
}

// input - 123
// output - Digits are: 3 2 1 and sum is 6