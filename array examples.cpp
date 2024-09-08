#include <iostream>
using namespace std;


int sum();//prototype //

int main(){
	int a;
	int vec[a];
	cout<<"Enter the amount of values you want to enter "<<endl;

	cin>>a;
	for(int k=0 ; k<a ; k++){
		cout<<"Enter "<<k<<"value "<<endl;
		cin>>vec[k];


	}



	return 0;
}
int sum(int a[],int b){


	float add=0;
	float average=0;

	for(int k=0 ; k<b ; k++){

		add=add+a[k];
		average=add/b;
	}
	cout<<"The sum is "<<add<<endl;
	cout<<"The average is "<<average;

}
