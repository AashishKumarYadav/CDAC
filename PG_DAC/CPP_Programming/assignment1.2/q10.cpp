// 10. WAP to check whether a number is prime or not.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num; cin>>num;

    int cnt = 0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cnt++;
        }
    }

    if(cnt == 2){
        cout<<num<<" number is prime"<<endl;
    }else{
        cout<<num<<" number is not prime"<<endl;
    }

    return 0;
}

// input - 61
// output - 61 num is prime