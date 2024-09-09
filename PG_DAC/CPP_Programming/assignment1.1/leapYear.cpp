// 8. WAP to check Leap Year.

#include<bits/stdc++.h>
using namespace std;

int main(){

	int year; cin>>year;

	if(year%400==0){
		cout<<"Leapyear"<<endl;
	}
	else if(year%100==0){
		cout<<"Not a Leapyear"<<endl;
	}
	else if(year%4==0){
		cout<<"Leapyear"<<endl;
	}
	else{
		cout<<"Not a Leapyear"<<endl;
	}

	return 0;
}

/*
input - 2024
output - Leapyear
*/