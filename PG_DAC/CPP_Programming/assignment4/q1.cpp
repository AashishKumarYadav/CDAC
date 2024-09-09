/*1. Write a program that asks the user to take array of 10 integers.The program must compute and write how many integers are greater than or equal to 10.*/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int size = 10;
	int arr[size] = {};

	cout<<"Enter 10 integers: "<<endl;

	for(int i=0;i<size;i++){
		cin>>arr[i];
	}

	int cnt = 0;

	for(int i=0;i<size;i++){
		if(arr[i]>=10) cnt++;
	}

	cout<<cnt<<" integers are greater than or equal to 10"<<endl;

	return 0;
}

// input - 3 4 11 8 10 3 5 15 23 1
// output - 4 integers are greater than or equal to 10*/