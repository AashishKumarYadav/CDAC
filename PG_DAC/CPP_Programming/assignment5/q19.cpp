//9. Write a program to convert a string in lowercase. (Using pointer)

#include<bits/stdc++.h>
using namespace std;

int sizee(char *ptr){

    int cnt = 0;

    while(*ptr!='\0'){
        cnt++;
        ptr++;
    }

    return cnt;
}

int main(){

    char str[] = "WHAT is YOUR NAME?";
    char *ptr = str;

    int ssize = sizee(ptr);

    for(int i=0;i<ssize;i++){
        if(*ptr>='A' && *ptr <= 'Z'){
            *ptr = *ptr+32;
        }
        ptr++;
    }

    cout<<str<<endl;

    return 0;
}

// output - what is your name?