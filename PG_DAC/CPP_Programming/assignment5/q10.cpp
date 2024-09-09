//10. Write a program to convert a string in uppercase.

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

    string str = "what is your name?";

    int ssize = sizee(str);

    for(int i=0;i<ssize;i++){
        if(str[i]>='a' && str[i] <= 'z'){
            str[i] = str[i]-32;
        }
    }

    cout<<str<<endl;

    return 0;
}

// output - WHAT IS YOUR NAME?