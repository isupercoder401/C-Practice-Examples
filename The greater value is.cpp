#include <iostream>
using namespace std;
int main(){
 int a;
 int b;
 int c;
 
 cout<<"Enter the first value "<<endl;
 cin>>a;
 cout<<endl;
 cout<<"The entered value is = "<<a<<endl;
 
 cout<<"Enter the second value "<<endl;
 cin>>b;
 cout<<endl;
 cout<<"The entered value is ="<<b<<endl;
 
 cout<<"Enter the third value "<<endl;
 cin>>c;
 cout<<endl;
 cout<<"The entered value is = "<<c<<endl;
 
 if(a>b){
 	cout<<a<<" is greater "<<endl;
    
    if(a>c){
    	cout<<a<<" is greater "<<endl;
	}
	else {
		cout<<c<<" is greater "<<endl;
	}
}
  else{
  	cout<<b<<" is greater "<<endl;
  }
  return 0;
}
 
 
 
