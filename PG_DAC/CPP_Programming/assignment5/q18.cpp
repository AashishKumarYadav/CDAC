//8. Write a program to reverse a string. (Using Pointer)


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

    char str[] = "what is your name?";
    char *ptr = str;

    int s = sizee(ptr);
    char *ptr2 = str+s-1;

    while(ptr<=ptr2){
        char ch = *ptr;
        *ptr = *ptr2;
        *ptr2 = ch;
        ptr++;
        ptr2--;
    }

    cout<<str<<endl;

    return 0;
}

// output - ?eman ruoy si tahw