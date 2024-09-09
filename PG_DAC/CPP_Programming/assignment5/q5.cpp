// 5. Write a program to compare two strings they are exact equal or not.

#include<bits/stdc++.h>
using namespace std;

int sizee(string str){
    int cnt = 0;

    for(int i=0;str[i]!='\0';i++){
        cnt++; 
    }

    return cnt;
}

bool compare(string str1,string str2){

    int sizeStr1 = sizee(str1);
    int sizeStr2 = sizee(str2);

    if(sizeStr1 != sizeStr2){
        return false;
    }

    for(int i=0;i<sizeStr1;i++){
        if(str1[i] != str2[i]){
            return false;
        }
    }

    return true;
}

int main(){

    string str1 = "He is a boy.";
    string str2 = "He is a boy.";

    if(compare(str1,str2)){
        cout<<"Eqal"<<endl;
    }
    else{
        cout<<"Not Equal"<<endl;
    }

    return 0;
}

//output - Equal