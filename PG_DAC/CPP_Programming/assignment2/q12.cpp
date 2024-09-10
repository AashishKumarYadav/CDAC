// 12. WAP to print reverse of a number. (Using function)

#include<bits/stdc++.h>
using namespace std;

int solve(int num){

    int revNo = 0;
  
    while(num>0){
        int lastD = num%10;
        revNo *= 10;
        revNo += lastD;
        num = num/10; 
    }

    return revNo;
}

int main(){

    int num; cin>>num;

    int revN = solve(num);

    cout<<"Reverse no. is "<<revN<<endl;

    return 0;
}

// input - 123
// output - Reverse is 321