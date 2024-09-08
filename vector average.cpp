#include<iostream>
using namespace std;
#define VSIZE 8 // directive 
float vectoravg(int size , float vector[]);
int main(){
float myvector[VSIZE]={1,2,3,4,5,6,7,8};
float avg;
vectoravg(VSIZE , myvector);
cout<<"Average = "<<avg<<endl;
}
float vectoravg(int m , float v[]){
	float sum=0 ,avg;

	int lcounter;
	for(lcounter=0 ; lcounter<m ; lcounter++){
		sum=sum+v[lcounter];
		//after this calling funtion in main
	}
	avg=sum/m;
	return avg;
}
