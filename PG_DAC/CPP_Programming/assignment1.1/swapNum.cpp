// 7. Write a program, which takes two integer numbers as input and it shows their exchanged value. (Don’t use
// third variable)

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n1 , n2; cin>>n1; cin>>n2;

	n1 = n1+n2;
	n2 = n1-n2;
	n1 = n1-n2;

	cout<<n1<<" "<<n2<<endl;
}

// input - 2 , 4
// output - 4 ,2