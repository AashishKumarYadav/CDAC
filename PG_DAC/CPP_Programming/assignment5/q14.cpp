// 4. Write a program to concatenate one string contents to another. (Using pinter)

#include<bits/stdc++.h>
using namespace std;

void concatenate(char *p1, char *p2){
    
    while(*p1 != '\0'){
        p1++;
    }

    while(*p2 != '\0'){
        *p1 = *p2;
        p1++;
        p2++;
    }

    *p1 = '\0';
}

int main(){

    char str1[100] = "He is a boy ";
    char *ptr = str1;

    char str2[] = "and gentleman.";

    concatenate(str1, str2);

    while(*ptr!='\0'){
        cout<<*ptr;
        ptr++;
    }

    return 0;
}

//output - He is a boy and gentleman.