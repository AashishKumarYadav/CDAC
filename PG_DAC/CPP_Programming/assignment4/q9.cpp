//9. Write a program to multiply 2 matrices.


#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"The number of columns in Matrix-1  must be equal to the number of rows in Matrix-2"<<endl;

	int mtrx1[3][3];
	int mtrx2[3][3];
	int mtrxResult[3][3];

	cout<<"Enter the elements of the first matrix:"<<endl;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>mtrx1[i][j];
		}
	}

    cout<<"Enter the elements of the first matrix:"<<endl;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>mtrx2[i][j];
		}
	}

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mtrxResult[i][j] = 0;

            for (int k = 0; k < 3; k++) {
                mtrxResult[i][j] += mtrx1[i][k] * mtrx2[k][j];
            }
        }
    }

    cout<<"Multiplication of given two matrices is:"<<endl;


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

The number of columns in Matrix-1  must be equal to the number of rows in Matrix-2
Enter the elements of the first matrix:
1 2 3
4 5 6
7 8 9
Enter the elements of the first matrix:
1 2 3
4 5 6
7 8 9

output -

Multiplication of given two matrices is:
30 36 42 
66 81 96
102 126 150
*/