#include<iostream>
using namespace std;
int main(){





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
