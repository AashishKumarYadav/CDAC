// 5. WAP for adding all numbers from 1 to 20. (Using Function)

#include<bits/stdc++.h>
using namespace std;

int sum(int s){

    for(int i=1;i<=20;i++){
        s += i;
    }

    return s;
}

int main(){

    cout<<sum(0)<<endl;
    
    return 0;
}

// output - 210