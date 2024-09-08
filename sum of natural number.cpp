#include <iostream>
using namespace std;
int main(){
/*	int x;
	int y;
	int z=0; 
	cout<<"Enter the natural number whose sum is to be found out "<<endl;
	cin>>x;
	for( y=1 ; y<=x ; ++y){
	z=z+y;
	}
	cout<<"The sum is "<<z<<endl;
	return 0;
} */

	int a;

	int c=0;
	cout<<"Enter the value "<<endl;
	cin>>a;
/* for (b=1 ; b<=a ; b++)*/
int b=1;
	do {
		c=c+b;
	     ++b;
	}
	while (b<=a); 
	cout<<"SUM IS = "<<c<<endl;
	return 0;
	
}

int a ; 
 int c=0 ;
 cout<<"Enter the reuired value "<<endl;
 cin>>a;
 /* for (b=1 ; b<=a ; b++)*/
 int b=1;
 while(b<=a){
 	c=c+b;
 	b++;
 }
 cout<<"Sum IS "<<c<<endl;
 return 0;
}














