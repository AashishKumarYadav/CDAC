// 3. Write a program to count number of words in string. 

#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "He is a boy.";

    int cnt = 0;

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' ') cnt++;
    }

    cout<<"Count of words in string are: "<<cnt+1<<endl;

    return 0;
}

//output - Count of words in string are: 4