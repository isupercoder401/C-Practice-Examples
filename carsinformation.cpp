#include <iostream>
using namespace std;
struct carinfo{
	char carname[20];
	char model[4];
	char colour[15];
	char enginenumber[25];
	char licenseplate[10];
	char chasisnumber[25];
};
int main(){
	struct carinfo info1;

    cout<<"Please Enter the car's name "<<endl;
    cin>>info1.carname;
    cout<<"The car name is "<<info1.carname<<endl;
    cout<<endl;
    
    cout<<"Please Enter the car's model "<<endl;
    cin>>info1.model;
    cout<<"The car's model is "<<info1.model<<endl;
    cout<<endl;
    
    cout<<"Please enter the car's colour "<<endl;
    cin>>info1.colour;
    cout<<"The car's colour is "<<info1.colour<<endl;
    cout<<endl;
    
    cout<<"Please enter the engine number of your car"<<endl;
    cin>>info1.enginenumber;
    cout<<"The engine number of the caar is  "<<info1.enginenumber<<endl;
    cout<<endl;
    
    cout<<"Please enter the license plate of the car "<<endl;
    cin>>info1.licenseplate;
    cout<<"The license plate of the car is "<<info1.licenseplate<<endl;
    cout<<endl;
    
    cout<<"Please enter the chasis number of the car "<<endl;
    cin>>info1.chasisnumber;
    cout<<"The chasis number of the car is "<<info1.chasisnumber<<endl;
    cout<<endl;
    
    return 0;
	
	}
