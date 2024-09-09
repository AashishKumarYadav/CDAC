/* 4. Write a program that asks the user to take array of 10 integers. The program will then display
either &quot;the array is growing&quot;, &quot;the array is decreasing&quot;,&quot;the array is constant
&quot;, or &quot;the array is growing and decreasing.&quot; */

#include<bits/stdc++.h>
using namespace std;

int main(){

	int size = 10;
	int arr[size] = {};

	cout<<"Enter 10 integers: "<<endl;

	for(int i=0;i<size;i++){
		cin>>arr[i];
	}

	int growingCnt = 0,decreasingCnt = 0, constantCnt=0;

	for(int i=0;i<size-1;i++){
		if(arr[i]<arr[i+1]){
			growingCnt++;
		}
		else if(arr[i]>arr[i+1]){
			decreasingCnt++;
		}
		else{
			constantCnt++;
		}
	}

	if(growingCnt > decreasingCnt && growingCnt > constantCnt){
		cout<<"Array is growing"<<endl;
	}
	else if(decreasingCnt > growingCnt && decreasingCnt > constantCnt){
		cout<<"Array is decreasing"<<endl;
	}
	else{
		cout<<"Array is constant"<<endl;
	}

	return 0;
}

// input - 3 4 11 8 10 3 5 15 23 1
// output - Array is growing