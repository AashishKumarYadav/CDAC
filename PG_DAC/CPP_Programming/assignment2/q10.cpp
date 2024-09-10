// 10. WAP to check whether a number is prime or not. (Using Function)

#include<bits/stdc++.h>
using namespace std;

int func(int num){

    int cnt = 0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cnt++;
        }
    }

    return cnt;
}

int main(){

    int num; cin>>num;

    int cnt = func(num);

    if(cnt == 2){
        cout<<num<<" number is prime"<<endl;
    }else{
        cout<<num<<" number is not prime"<<endl;
    }

    return 0;
}

// input - 61
// output - 61 num is prime