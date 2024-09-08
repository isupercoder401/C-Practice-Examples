#include <iostream>
using namespace std;
int main(){

	
 /*   int numbers[5];

    cout << "Enter 5 numbers: " << endl;

  
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }

    cout << "The numbers are: ";

 
    for (int n = 0; n < 5; ++n) {
        cout << numbers[n] << "\t";
    }
    
    cout<<endl;
    
    int number2[5];
    cout<<"Enter the 5 elements : "<<endl;
    
    for(int j=0 ;j<5 ; ++j){
    	cin>>number2[j];
    	
	}
	for (int m=0; m<5 ; ++m){
		cout<<number2[m]<<"\t";
	}
	*/
	int a;
	cout<<"Enter the value of values for the array "<<endl;
	cin>>a;
	
	int vector[a];
	float average;
	int sum=0;	
	
	for(int i=0 ; i<a ; i++){
		cin>>vector[i];
		sum=sum+vector[i];
		average=sum/a;
	}
    cout<<"The sum is "<<sum<<endl;
    cout<<endl;
    cout<<"The average is "<<average<<endl;
	

    return 0;


}
