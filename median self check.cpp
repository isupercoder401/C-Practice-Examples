#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int b;
	cin>>b;
	int c;
	cin>>c;
	
	if(a<b){
		if(b<c){
			cout<<"    THIS IS THE MEDIAN=    "<<b<< endl;
		}
		else {
		
		     cout<<"    ENTER DIGITS IN ASCENDING ORDER    ";
		 }
	}
	else{
		cout<<"    ENTER DIGITS IN ASCENDING ORDER    ";
	}
	return 500;
}
