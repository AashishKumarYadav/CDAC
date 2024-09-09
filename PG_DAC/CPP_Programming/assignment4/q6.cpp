/*6. Write a program that asks the user to take an array of 10 integer and an integer value V and an
index value i between 0 and 9. The program must put the value V at the place i in the array,
shifting each element right and dropping off the last element. The program must then write the
final array.*/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int size = 10;
	int arr[size] = {};

	cout<<"Enter 10 integers: "<<endl;

	for(int i=0;i<size;i++){
		cin>>arr[i];
	}

	cout<<"Enter an integer value: "<<endl;
	int value; cin>>value;

	cout<<"Enter an index value i between 0 and 9"<<endl;
	int idx; cin>>idx;

	for(int i=size-1;i>=idx;i--){
		if(i != idx){
			arr[i] = arr[i-1];
		}
		else{
			arr[i] = value;
		}
		
	}

	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}

/** input -
Enter 10 integers: 
3 4 11 8 10 3 5 15 23 1
Enter an integer value: 
7
Enter an index value i between 0 and 9
4
output - 3 4 11 8 7 10 3 5 15 23  */