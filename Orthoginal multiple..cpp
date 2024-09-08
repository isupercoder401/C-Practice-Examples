#include <iostream>
using namespace std;
int main(){
	cout<<"Enter the required value "<<endl;
	float a;
	cin>>a;
	cout<<endl;
	cout<<"The entered vale is = "<<a<<endl;
	
	cout<<"Enter the second value "<<endl;
	float b;
	cin>>b;
	cout<<endl;
	cout<<"The second entered value is= "<<b<<endl;
	int M;
	M=a*b;
	cout<<endl;
	cout<<"The product is ="<<M<<endl;
	
	if (M==0){
		cout<<"The product is orthogonal because equal to 0 "<<endl;
		
	}
	else {
		cout<<"The product is non-orthogonal because not equal to 0 "<<endl;
		
	}
	return 0;
}
