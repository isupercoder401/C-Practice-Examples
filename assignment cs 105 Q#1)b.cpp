#include<iostream>
using namespace std;
int main(){

int a1[15];

int userchoice;

cout<<"Enter the number of inputs you want "<<endl;

cin>>userchoice;

cout<<"The number of inputs selected by user are : "<<userchoice<<endl;

int variable ;

float result ;

int sum =0;

for (variable=1 ; variable<=userchoice ; variable++){
	
	cout<<endl;
	
	cout<<"Please enter a value . CAUTION less than 10 "<<endl;
	
	cin>>a1[variable];
	
cout<<"The entered number is : "<<a1[variable];
	if(a1[variable]<10){
		sum=sum+a1[variable];
		result=sum/userchoice;
		
	}
	else{
		cout<<"Please enter a different value , remember the value should be less than 10 !"<<endl;
	}
	
}
	
cout<<"THE MEAN OF YOUR GIVEN INPUTS IS : "<<result<<endl;
// For va

return 0;
}

