// 15. WAP to check whether the number entered is palindrome or not.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num; cin>>num;

    int n = num;
    int revNumSum = 0;

    while(num>0){
        int lastD = num%10;
        revNumSum *= 10;
        revNumSum += lastD;
        num /= 10;
    }

    if(n == revNumSum){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }

    return 0;
}

//output -