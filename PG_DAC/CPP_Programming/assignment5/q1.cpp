//1. Write a program to find the length of string.

#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "He is a boy.";

    int cnt = 0;

    for(int i=0;str[i]!='\0';i++){
        cnt++;
    }

    cout<<"Length of string is: "<<cnt<<endl;

    return 0;
}

//output - Length of string is: 12