#include <iostream>
using namespace std;

int main(){
	int a;
	int perfectsquare;
	cout<<"Enter the value you want to check for perfect square "<<endl;
	
	cin>> a;
	
	for(int i=1;i<=a; i++ )
		{
			if(i*i==a)
			{
				perfectsquare=1;
				break;}
				
			if(i*i>number){
			perfectsquare=0;
			break;
			}
		}
		
		if(perfectsquare){
			cout<<" is a  perfect square   ";}
			else{
			cout<<"not perfect square root";
		}
		return 0;
}
