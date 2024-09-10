// 5. Write a program to compare two strings they are exact equal or not. (Using Pointer)

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

bool compare(char str1[],char str2[]){

    char *ps1 = str1;
    char *ps2 = str2;

    int sizeStr1 = sizee(ps1);
    int sizeStr2 = sizee(ps2);

    if(sizeStr1 != sizeStr2){
        return false;
    }

    for(int i=0;i<sizeStr1;i++){
        if(*ps1 != *ps2){
            return false;
        }
        ps1++;
        ps2++;
    }

    return true;
}

int main(){

    char str1[] = "He is a boy.";
    char str2[] = "He is a boy.";

    if(compare(str1,str2)){
        cout<<"Eqal"<<endl;
    }
    else{
        cout<<"Not Equal"<<endl;
    }

    return 0;
}

//output - Equal