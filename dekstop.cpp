#include <iostream>
using namespace std;
int main(){
/*	int a;
	int b;
	for ( a=2 ; a<=5 ; a++){
		for ( b=3 ; b<=2 ; b++){
			cout<<a*b<<endl;
			
		}
	}
	if (a>10){
		cout<<"the product exists"<<endl;
	}
	else {
		cout<<"    the condition is not met    "<<endl;
	}
	cout<<"end is end"<<"\n";
	return 0;*/
	
	int a ;
	int b ;
	b=0;
	int c;
	float mean;
	
	while(a<10){
		cout<<"Please enter a number "<<endl;
		cin>>a;
		if(a<10){
			c=c+a;
			
		}
		else{
			mean=c/b;
			
			cout<<"the mean is "<<mean<<endl;
			break;
		}
	}
	return 0;
}
