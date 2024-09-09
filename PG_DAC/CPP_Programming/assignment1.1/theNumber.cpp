// 5. Write a program that takes one input as number and it will display whether the number is +ve, -ve or zero. If
// the number is +ve, then it will display whether the number is odd or even.
#include<bits/stdc++.h>
using namespace std;

int main() {
   int n; cin>>n;

   if(n>0){
      cout<<"+ve number"<<endl;
      if(n%2==0){
         cout<<n<<" is even number"<<endl;
   }
   else{
   	cout<<n<<" is odd number"<<endl;
   }
   }
   else if(n<0){
      cout<<"-ve number"<<endl;
   }
   else{
      cout<<"it is zero"<<endl;
   }

   return 0;
}

/*
input -
17
output -
+ve number      
17 is odd number
*/