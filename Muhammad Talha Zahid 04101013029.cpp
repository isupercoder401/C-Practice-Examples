#include <iostream>
using namespace std;
int main(){
	
	cout<<"Q#1b)write a program that takes a character from a keyboard and diplay its ASCII value in binary and decimal format"<<endl;

char p;//we initialised a charcter	
	cout<<"Enter the  value in ASCII to convert into Binary "<<endl;
	cin>>p;//We took input from the consumer 
	cout<<"The entered Character is :"<<p<<endl;
	int p1;//we initialised an integer 
	int p2[8];//we initialised a integer with size of 8 bit

	cout<<endl;
	cout<<"The decimal value of "<<p<<" is "<<int(p)<<endl;
	
		cout<<"The value of "<<p<<" in Binary is :"<<endl;
	
	
	/* Now applying for loop for multiple Time conversion and to save our time*/
	
	for (p1=0 ; p1<8 ; p1++){
		
		p2[p1]=p%2;
		
		p=p/2;
	
}

int m ;//we initialise another integer

int n;//then another integer 

/*now again applying for loop*/
for (m=0,n=7;m<8;m++,n-- ){//The integers are consider from 0 to 7 becasue we initialise 8 bit integer.
	cout<<p2[m];	
}

	
return 0;
}
