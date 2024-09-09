#include<bits/stdc++.h>
using namespace std;

int main(){

    int star = 1;

    int n = 6;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=star;j++){
            cout<<"* ";
        }
        cout<<endl;
        star++;
    }

    return 0;
}

/*output -
* 
* *
* * *
* * * *
* * * * *
* * * * * *
*/