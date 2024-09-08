#include <iostream>
using namespace std;
int main(){
	float x[3]={0,1,0};
	float y[3]={1,0,0};
	int count;
	float mult;
	for(count=0 ; count<3 ; count++){
		mult=x[count]*y[count];
	}
	cout<<"Product is "<<mult<<endl;
	
	if(mult==0){
		cout<<"The product is orthogonal "<<endl;
		
	}
	else{
	cout<<"The product is not orthogonal"<<endl;
	}
	 return 0;
}
