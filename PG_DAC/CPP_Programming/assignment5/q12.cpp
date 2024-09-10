// 2. Write a program to display string from backward. (Using pointer)

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

    char str[] = "Welcome";
    char *p = str;

    int s = sizee(p);

    char *ptr = (str+s)-1;

    for(int i=s;i>=0;i--){
        cout<<*ptr<<" ";
        ptr--;
    }

    return 0;
}

//output - e m o c l e W