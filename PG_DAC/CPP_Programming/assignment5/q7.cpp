//7. Write a program to find a substring within a string. If found display its starting position.

#include<bits/stdc++.h>
using namespace std;

int sizee(string str){
    int cnt = 0;

    for(int i=0;str[i]!='\0';i++){
        cnt++;
    }

    return cnt;
}

int findSubstring(string str, string subStr) {
    int sizee1 = sizee(str);
    int sizee2 = sizee(subStr);

    for (int i=0;i<=sizee1-sizee2;i++){

        int j;
        
        for (j = 0; j < sizee2; j++) {
            if (str[i + j] != subStr[j]) {
                break;
            }
        }

        if (j == sizee2) {
            return i;
        }
    }

    return -1;
}

int main() {
    string mainStr, subStr;

    cout << "Enter the main string: ";
    getline(cin,mainStr);

    cout << "Enter the substring: ";
    getline(cin,subStr);

    int position = findSubstring(mainStr, subStr);

    if (position != -1) {
        cout << "Substring found at position: " << position << endl;
    } else {
        cout << "Substring not found." << endl;
    }

    return 0;
}


/*
input - 
Enter the main string: welcome back
Enter the substring: come
output -
Substring found at position: 3
*/