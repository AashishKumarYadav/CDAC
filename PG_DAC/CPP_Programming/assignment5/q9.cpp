//9. Write a program to convert a string in lowercase.

#include<bits/stdc++.h>
using namespace std;

int sizee(string str){
    int cnt = 0;

    for(int i=0;str[i]!='\0';i++){
        cnt++;
    }

    return cnt;
}

int main(){

    string str = "WHAT is YOUR NAME?";

    int ssize = sizee(str);

    for(int i=0;i<ssize;i++){
        if(str[i]>='A' && str[i] <= 'Z'){
            str[i] = str[i]+32;
        }
    }

    cout<<str<<endl;

    return 0;
}

// output - what is your name?