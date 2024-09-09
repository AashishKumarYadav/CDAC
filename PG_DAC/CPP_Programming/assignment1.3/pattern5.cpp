#include<bits/stdc++.h>
using namespace std;

int main(){

    int col = 4;

    int row = 4;
    char ch = 'A';

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<ch++;
        }
        cout<<endl;
        ch = 'A';
        col--;
    }

    return 0;
}

/*output -
ABCD
ABC
AB
A
*/