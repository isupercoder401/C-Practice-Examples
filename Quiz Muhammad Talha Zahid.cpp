#include <iostream>

using namespace std;

int mian(){
	
	int a;
	
	cout<<"Enter the first value "<<endl;
	
	cin>>a;
	
	int *apoint;
	
	apoint=&a;
	
	int b;
	
	cout<<"Enter the second number "<<endl;
	
	cin>>b;
	
	int *bpoint;
	
	bpoint=&b;
	
	int product;
	 
	 product = *bpoint * *apoint;
	 
	 cout<<"The produc is "<<product<<endl;
	 
	 return 0;
}
