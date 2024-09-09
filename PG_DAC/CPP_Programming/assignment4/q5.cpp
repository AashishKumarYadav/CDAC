/* 5. Write a program which takes 2 arrays of 10 integers each, a and b. c is an array with 20 integers.
The program should put into c the appending of b to a, the first 10 integers of c from array a, the
latter 10 from b. Then the program should display c. */

#include<bits/stdc++.h>
using namespace std;

int main(){

	int size = 10;
	int sizee = 20;
	int a[size] = {};
	int b[size] = {};
	int c[sizee] = {};

	cout<<"Enter 10 integers of array a: "<<endl;

	for(int i=0;i<size;i++){
		cin>>a[i];
	}

	cout<<"Enter 10 integers of array b: "<<endl;
	for(int i=0;i<size;i++){
		cin>>b[i];
	}

	int cnt = 1;
	int idx = 0;
	for(int i=0;i<sizee;i++){
		if(cnt<=10){
			c[i] = a[i];
			cnt++;
		}
		else{
			c[i] = b[idx++];
		}
	}

	for(int i=0;i<sizee;i++){
		cout<<c[i]<<" ";
	}

	return 0;
}
//input -
// Enter 10 integers of array a: 
// 3 4 11 8 10 3 5 15 23 1
// Enter 10 integers of array b: 
// 2 3 4 5 6 7 8 9 10 11
//output -
// 3 4 11 8 10 3 5 15 23 1 2 3 4 5 6 7 8 9 10 11 