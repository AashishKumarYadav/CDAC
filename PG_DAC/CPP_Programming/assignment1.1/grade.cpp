// 16. Write a program that will give the grade of the student based on the percentage he got in the course.
// Use the following criteria for assigning grades:
// Grade = A ( when percentage &gt;= 60)
// Grade = B ( when percentage &gt;= 50 and percentage &lt; 60)
// Grade = C ( when percentage &gt;= 40 and percentage &lt; 50)
// Grade = D ( when percentage &gt;= 30 and percentage &lt; 40)
// Grade = E ( when percentage &gt;= 20 and percentage &lt; 30)

#include<bits/stdc++.h>
using namespace std;

int main(){

	float per; cin>>per;

	if(per >= 60){
		cout<<"Grade = A "<<endl;
    }
    else if(per >= 50 and per < 60){
    	cout<<"Grade = B "<<endl;
    }
    else if(per >= 40 and per < 50){
    	cout<<"Grade = C "<<endl;
    }
    else if( per >= 30 and per < 40){
    	cout<<"Grade = D "<<endl;
    }
    else if(per >= 20 and per < 30){
    	cout<<"Grade = E "<<endl;
    }

	return 0;
}

/*
input -
54
output -
Grade = B */