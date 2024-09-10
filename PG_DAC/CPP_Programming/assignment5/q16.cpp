//6. Write a program to check a string is palindrome or not. (Using Pointer)

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

bool check(char str[],int n){

    char *ptr1 = str;
    char *ptr2 = str+n;
    
    while(ptr1<=ptr2){
        if(*ptr1!=*ptr2){
            return false;
        }
        ptr1++;
        ptr2--;
    }

    return true;
}

int main(){

    char str[] = "racecar";
    char *p = str;


    int s = sizee(p);


    if(check(str,s-1)){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }

    return 0;
}

//output - palindrome