#include <iostream>
using namespace std;
int main(){
	int x;
	int y; 
	int z=1;
	cout<<"Enter the value whose factorial is required "<<endl;
	cin>>x;
	
	for (y=1 ; y<=x ; y++){
	 z=z*y;
	}
	 cout<<"The factorial of "<<x<<"  is  =  "<<z<<endl;
	 cout<<endl;
	cout<<"out of loop"<<endl;
	return 0;
}
 int a;

 int c=1;
 
cin>>a;
/*for ( b=1 ; b<=a ; b++)*/
int b=1;
 do {
 	c=c*b;
	 b++;	
 }
 while(b<=a);
 cout<<"The sum is "<<c<<endl;
 return 0;
}

int a ;
int c=1 ;

cin>>a;
int b=1;

while(b<=a)
{
	c=c*b;
	b++;
}
cout<<"The sum is ="<<c<<endl;
return 0;
}

