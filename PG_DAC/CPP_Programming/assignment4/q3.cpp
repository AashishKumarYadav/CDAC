/* 3. Write a program that asks the user to take array of 10 integers. The program will then sort the array
in descending order and display it. */

#include<bits/stdc++.h>
using namespace std;

int main(){

	int size = 10;
	int arr[size] = {};

	cout<<"Enter 10 integers: "<<endl;

	for(int i=0;i<size;i++){
		cin>>arr[i];
	}

	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[j]>arr[i]){
				//swap(arr[i],arr[j]);
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
			}
		}
	}

	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}

// // input - 3 4 11 8 10 3 5 15 23 1
// // output - 23 15 11 10 8 5 4 3 3 1 (Decending Order)