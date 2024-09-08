#include <iostream>
using namespace std;
int main(){
	
	int a,sqrt;//we initialised  integer 
	

	
	cout<<"Enter the value which you want to check either a perfect square or not "<<endl;
	cin>>a;//we took input from the user
	
	/*Applying for loop*/

	for (int b=1;b<a;b++){
		/*Now applying if loop*/
	if (b*b==a){//note that == is used for comparison.
		sqrt=1;
	break;	
	}
	else if(b*b>a){
		sqrt =0;
	break;
}
}
if(sqrt){
	cout<<a<<" is a pefect square ";
}
else {
	cout<<a<<" is not a perfect sqare ";
	
}

return 0;
}
