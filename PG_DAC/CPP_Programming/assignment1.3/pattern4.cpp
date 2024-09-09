#include<bits/stdc++.h>
using namespace std;

int main(){

    int star = 5;
    int space = 1;

    int n = 5;

    int cnt = 1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=star;j++){
            cout<<"* ";
        }
        for(int k=1;k<=space-2;k++){
            cout<<"  ";
        }
        for(int j=1;j<=star;j++){
            if(cnt!=1) {
                cout<<"* ";
            }
            else{
                cnt++;
            }
        }
        cout<<endl;

        space+=2;
        star--;
    }

    return 0;
}

/*output -

* * * * * * * * * 
* * * *   * * * *
* * *       * * *
* *           * *
*               *

*/