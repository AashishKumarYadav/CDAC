#include<bits/stdc++.h>
using namespace std;

int main(){

    int star = 1;
    int space = 5;

    int n = 6;

    for(int i=1;i<=n;i++){

        for(int k=1;k<=space;k++){
            cout<<"  ";
        }
        for(int j=1;j<=star;j++){
            cout<<"* ";
        }
        cout<<endl;

        space--;
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