// 4. Write a program to concatenate one string contents to another.

#include<bits/stdc++.h>
using namespace std;

int main(){

    string str1 = "He is a boy ";
    string str2 = "and gentleman.";

    //str1 += str2;

    for(int i=0;str2[i]!='\0';i++){
        str1 += str2[i];
    }  

    cout<<str1<<endl;

    return 0;
}

//output - He is a boy and gentleman.