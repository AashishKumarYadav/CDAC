// 3. Write a program to count number of words in string. (Using pointer)

#include<bits/stdc++.h>
using namespace std;

int main(){

    char str[] = "He is a boy.";
    char *p = str;

    int cnt = 0;

    while(*p!='\0'){
        if(*p==' ') cnt++;
        p++;
    }

    cout<<"Count of words in string are: "<<cnt+1<<endl;

    return 0;
}

//output - Count of words in string are: 4