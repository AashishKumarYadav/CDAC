// 6. WAP for finding sum of all even numbers till 20. (Using function)

#include<bits/stdc++.h>
using namespace std;

int sum(int s){

    for(int i=1;i<=20;i++){
        if(i%2==0) s+=i;
    }

    return s;
}

int main(){

    cout<<sum(0)<<endl;

    return 0;
}

// output - 110