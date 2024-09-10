//7. Write a program to find a substring within a string. If found display its starting position. (Using Pointer)

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

int findSubstring(char str[],char subStr[]){

    char *ptr1 = str;
    char *ptr2 = subStr;

    int sizee1 = sizee(ptr1);
    int sizee2 = sizee(ptr2);

    for(int i=0;i<=sizee1-sizee2;i++){

        int j;
        
        for(j = 0; j < sizee2; j++) {
            ptr1 = str+i+j;
            ptr2 = subStr+j;
            if(*ptr1 != *ptr2){
                break;
            }
        }

        if(j == sizee2){
            return i;
        }
    }

    return -1;
}

int main() {
    char mainStr[] = "Hello world";
    char subStr[] = "world";

    int position = findSubstring(mainStr, subStr);

    if (position != -1) {
        cout << "Substring found at position: " << position << endl;
    } else {
        cout << "Substring not found." << endl;
    }

    return 0;
}


/*
output -
Substring found at position: 6
*/