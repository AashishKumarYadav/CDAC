//8. Write a program to add 2 matrices.

#include<bits/stdc++.h>
using namespace std;

int main(){

	int mtrx1[3][3];
	int mtrx2[3][3];
	int mtrxResult[3][3];

	cout<<"Enter the elements of the first matrix:" <<endl;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>mtrx1[i][j];
		}
	}

    cout<<"Enter the elements of the first matrix:" <<endl;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>mtrx2[i][j];
		}
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			mtrxResult[i][j] = mtrx1[i][j]+mtrx2[i][j];
		}
	}

    cout<<"The sum of the two matrices is:"<<endl;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<mtrxResult[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}

/*
input -

Enter the elements of the first matrix:
1 2 3
4 5 6
7 8 9
Enter the elements of the first matrix:
1 2 3 
4 5 6
7 8 9

output -

The sum of the two matrices is:
2 4 6
8 10 12
14 16 18
*/