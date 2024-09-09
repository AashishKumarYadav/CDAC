// 12. WAP to print reverse of a number.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num; cin>>num;

    int revNo = 0;
  
    while(num>0){
        int lastD = num%10;
        revNo *= 10;
        revNo += lastD;
        num = num/10; 
    }

    cout<<"Reverse no. is "<<revNo<<endl;

    return 0;
}

// input - 123
// output - Reverse is 321