// 13. WAP to check whether the number is Armstrong or not. (Using function)

#include<bits/stdc++.h>
using namespace std;

int solve(int num){

    int sum = 0;

    while(num>0){
        int lastD = num % 10;
        int qNum = lastD*lastD*lastD;
        sum += qNum;
        num /= 10;
    }

    return sum;
}

int main(){

    int num; cin>>num;
    int n = num;

    int s = solve(num);

    if(s == n){
        cout<<"the number is Armstrong"<<endl;
    }
    else{
        cout<<"the number is not Armstrong"<<endl;
    }

    return 0;
}

//input - 153
//output - the number is Armstrong