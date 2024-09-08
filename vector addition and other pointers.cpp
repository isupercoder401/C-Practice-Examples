#include<iostream>
using namespace std;
float addvectors(float*, float* , int );

int main(){
	float v1[5]={0,1,2,3,4};
	
	float v2[5]={5,6.5,7.9,8,9};
	
    float result;
	
	float *pointer1;
	
	float *pointer2;
	
	pointer1=&v1[0];//location of first element v1 vector.we can also write it as pointer1=v1... so that v1 is the pointer itself.
	
	pointer2 =&v2[0];//location of fiorst element of v2 vector.
	
	result=addvectors(pointer1 , pointer2, 5 );
	
	cout<<result<<endl;
	
	cout<<"The size of vectors v1 and v2 is "<<sizeof(v1)<<" Bytes"<<endl;
	
	cout<<"location of v1 is "<<pointer1<<"\t"<<"The location of v2 is "<<pointer2<<endl;
	
	return 0;
	
}

float addvectors(float*p1, float*p2 , int z){//z for number of elements to add the number os element in the vector.

float R=0;

int i ;

for (i=0 ; i<z ; i++){
R =R + *p1+ *p2;
	p1++;
	p2++;
	}
return R;
}
