#include<bits/stdc++.h>
using namespace std;

int main(){

    int star = 5;
    int space = 1;
    char ch = 'A';
    char ch2 = 'D';
    int col2 = 4;

    int n = 5;

    int cnt = 1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=star;j++){
            if(cnt<=2) {
                ch2 = 'D';
            }
            else{
                ch2 = ch;
            }
            cout<<ch++;
        }
        for(int k=1;k<=space-2;k++){
            cout<<" ";
        }
        if(star<=3){
            col2 = star;
        }
        for(int j=1;j<=col2;j++){
            cout<<ch2--;
        }
        cout<<endl;
        ch = 'A';
        cnt++;
        
        space+=2;
        star--;

    }

    return 0;
}

/*output -

ABCDEDCBA
ABCD DCBA
ABC   CBA
AB     BA
A       A

*/