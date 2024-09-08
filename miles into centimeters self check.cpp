#include <iostream>
using namespace std;
int main(){
	float MILESINTOCENTIMETERS;
	cout<<"ENTER AMOUNT OF MILES REQUIRED TO BE CONVERTED INTO CENTIMETERS =    ";
	cin>>MILESINTOCENTIMETERS;
	float onemile=160934;
	float MILES=float(onemile)*MILESINTOCENTIMETERS;
	cout<<MILESINTOCENTIMETERS<<"    MILES INTO CENTIMETERS    =    "<<MILES<<endl;
	return 0;
	
}
