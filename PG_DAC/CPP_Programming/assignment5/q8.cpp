//8. Write a program to reverse a string.


#include<bits/stdc++.h>
using namespace std;

int sizee(string str){
    int cnt = 0;

    for(int i=0;str[i]!='\0';i++){
        cnt++;
    }

    return cnt;
}

int main(){

    string str = "what is your name?";

    int i = 0;
    int s = sizee(str);
    int j = s-1;

    while(i<=j){
        char ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i++;
        j--;
    }

    cout<<str<<endl;

    return 0;
}

// output - ?eman ruoy si tahw