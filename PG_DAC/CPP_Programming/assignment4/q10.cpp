// 10. Write a program to implement sorting an array.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[15] = {88,3,7,8,37,4,9,67,30,0,1,3,99,5,7};

	for(int i=0;i<15;i++){
		for(int j=i+1;j<15;j++){
			if(arr[j]<arr[i]){
				//swap(arr[i],arr[j]);
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
			}
		}
	}

	for(int i=0;i<15;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}

// output - 0 1 3 3 4 5 7 7 8 9 30 37 67 88 99 (increasing order)
