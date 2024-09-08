#include <iostream>
using namespace std;
int main(){
	/* Declaring an Array of 5 Integers*/	

int vectorofint[5]={3,-5,10,1,-8};
int counter ;
/*for (counter=0 ; coutter<5 ; counter++){
	cout<<vectorofint[counter]<<endl;
} for farward loop*/
for (counter=4 ; counter>=0 ; counter--){
	cout<<vectorofint[counter]<<endl;
}
cout<<vectorofint[0]<<endl;
	cout<<vectorofint[1]<<endl;
	cout<<vectorofint[2]<<endl;
	cout<<vectorofint[3]<<endl;
	cout<<vectorofint[4]<<endl;

 
	return 0;
}
