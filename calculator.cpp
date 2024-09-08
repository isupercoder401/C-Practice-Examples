#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float variable,var1,var2,result;
	int d;
	int userchoice;
	cout<<"press 1 for addition"<<endl;
	cout<<"press 2 for subtraction"<<endl;
	cout<<"press 3 for multiplication"<<endl;
	cout<<"press 4 for division"<<endl;
	cout<<"press 5 for finding square"<<endl;
	cout<<"Press 6 for under-root"<<endl;
	cout<<"Press 7 for checking if number is even "<<endl;
	cout<<"Press 8 for check if number is odd"<<endl;
	cout<<"Press 9 to check the product of two numbers is even or odd "<<endl;
	int c;
	switch (userchoice){
		case 1:
			cout<<"Enter 1st variable"<<endl;
			cin>>var1;
			cout<<"Enter 2nd variable"<<endl;
			cin>>var2;
			result=var1+var2;
			cout<<"This is the value   "<<result<<endl;
			break;
		case 2:
			cout<<"Enter 1st variable"<<endl;
			cin>>var1;
			cout<<"Enter 2nd variable"<<endl;
			cin>>var2;
			result=var1-var2;
			cout<<"This is the value   "<<result<<endl;
			break;
		case 3:
			cout<<"Enter 1st variable"<<endl;
			cin>>var1;
			cout<<"Enter 2nd variable"<<endl;
			cin>>var2;
			result=var1*var2;
			cout<<"This is the value   "<<result<<endl;
			break;
		case 4:
			cout<<"Enter 1st variable"<<endl;
			cin>>var1;
			cout<<"Enter 2nd variable"<<endl;
			cin>>var2;
			result=var1/var2;
			cout<<"This is the value   "<<result<<endl;
			break;
		case 5:
			cout<<"Enter the value who's squareroot is required"<<endl;
			cin>>var1;
			result=var1*var1;
			cout<<"This is the value "<<result<<endl;
			break;
		case 6:
			cout<<"Enter the whose under-root is needed"<<endl;
			cin>>var2;
			result=sqrt(var2);
			cout<<"This is the value "<<result<<endl;
			break;
		case 7:
			cout<<"enter the value of which you want to check if it is even "<<endl;
			cin>>c;
			if(c%2==0){
				cout<<" Is even number"<<endl;
			}
			else {
				cout<<"Is not Even number "<<endl;
			}
			break;
		case 8:
			cout<<"Enter the value of which you want to check if it odd"<<endl;
			cin>>c;
			if(c%2==1){
				cout<<"Value is odd"<<endl;
			}
			else{
				cout<<"The value is not odd"<<endl;
			}
			break;
		case 9:
			cout<<"Enter 1st value "<<endl;
			cin>>var1;
			cout<<"Enter 2nd value "<<endl;
			cin>>var2;
			
			d=var1*var2;
			
			if(d%2==0){
				cout<<"The product "<<d<<" is even number "<<endl;
			}
			else {
				cout<<"The product "<<d<<" is odd number "<<endl;
				
			}
			break;
							}
	
							cout<<"Out of switch"<<endl;
							cout<<"ignore out of switch "<<endl;
						
							return 0;
}
