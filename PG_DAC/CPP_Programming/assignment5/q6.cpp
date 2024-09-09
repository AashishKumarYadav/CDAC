//6. Write a program to check a string is palindrome or not.  

#include<bits/stdc++.h>
using namespace std;

int sizee(string str){
    int cnt = 0;

    for(int i=0;str[i]!='\0';i++){
        cnt++;
    }

    return cnt;
}

bool check(string str,int n){
    int i = 0;
    while(i<=n){
        if(str[i++]!=str[n--]){
            return false;
        }
    }

    return true;
}

int main(){

    string str = "racecar";

    int s = sizee(str);

    for(int i=0;i<s;i++){
        if(str[i]>='A' && str[i] <= 'Z'){
            str[i] = str[i]+32;
        }
    }

    if(check(str,s-1)){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }

    return 0;
}

//output - palindrome