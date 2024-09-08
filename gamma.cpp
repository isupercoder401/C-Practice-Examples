#include<iostream>
using namespace std;
int main(){

	int a[4];
	
	cout<<"Enter the 4 values of the array"<<endl;
	
	for(int i=0; i<4 ; ++i){
		cin>>a[i];
		
	}
	
	cout<<"The values of array are "<<endl;
	for(int q=0; q<4 ; ++q){
		cout<<a[q]<<"\t";
		
	}
	cout<<endl;
	int *ptr1;
	
	cout<<"The location of ";
	ptr1=&a[0];
	cout<<*ptr1<<" is "<<ptr1<<endl;
	cout<<endl;
	
    int *ptr2;
    
    cout<<"The location of ";
    ptr2=&a[1];
    cout<<*ptr2<<" is "<<ptr2<<endl;
    cout<<endl;
    
    int *ptr3;
    
    cout<<"The location of ";
    ptr3=&a[2];
    cout<<*ptr3<<" is "<<ptr3<<endl;
    cout<<endl;
    
    int *ptr4;
    
     cout<<"The location of ";
    ptr4=&a[3];
    cout<<*ptr4<<" is "<<ptr4<<endl;
    cout<<endl;
    
    
    
	return 0;
}
