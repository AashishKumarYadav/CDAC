// 2. Write a program to display string from backward.

#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "Welcome";

    int cnt = 0;

    for(int i=0;str[i]!='\0';i++){
        cnt++;
    }

    for(int i=cnt;i>=0;i--){
        cout<<str[i]<<" ";
    }

    return 0;
}

//output -  e m o c l e W