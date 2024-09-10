//11. Write a program to find the length of string. (Using pointer)

#include<bits/stdc++.h>
using namespace std;

int main(){

    char str[] = "He is a boy.";

    char *ptr = str;

    int cnt = 0;

    for( ;*ptr!='\0';ptr++){
        cnt++;
    }

    cout<<"Length of string is: "<<cnt<<endl;

    return 0;
}

//output - Length of string is: 12