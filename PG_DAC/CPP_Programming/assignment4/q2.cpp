//2. Write a program that asks the user to take array of 10 integers. The program must output the largest
// element in the array, and the index at which that element was found.

#include<bits/stdc++.h>
using namespace std;

int main(){

	int size = 10;
	int arr[size] = {};

	cout<<"Enter 10 integers: "<<endl;

	for(int i=0;i<size;i++){
		cin>>arr[i];
	}

	int maxxx = INT_MIN;
	int index = -1;

	for(int i=0;i<size;i++){
		if(arr[i]>maxxx){
			maxxx = arr[i];
			index = i;
		}
	}

	cout<<"the largest element in the array is "<<maxxx<<" and the index is "<<index<<endl;

	return 0;
}

// input - 3 4 11 8 10 3 5 15 23 1
// output - the largest element in the array is 23 and the index is 8