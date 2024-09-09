#include<bits/stdc++.h>
using namespace std;

int main(){

    int star = 1;

    int n = 6;
    int cnt = 1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=star;j++){
            cout<<cnt;
            cnt++;
        }
        cout<<endl;
        cnt = 1;
        star++;
    }

    return 0;
}

/*output -
1
12
123
1234
12345
123456
*/