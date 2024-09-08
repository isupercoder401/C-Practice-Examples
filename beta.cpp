
/*#include<iostream>

using namespace std;

int main(){

	int x=10;


	double z[8];
	char c = 'A' ;

    int *px;

    char *pc;

	px =&x;

	pc =&c;

    cout<<pc<<endl;

    cout<<" Adress of x = "<<px<< " address of c = "<<pc<<endl;

    px++;

    cout<<px<<endl;

	return 0;

}*/
/*#include <iostream>
using namespace std;
#define VECTORSIZE 8

float vectoravg(int size , float vector[] );//paremeters are initialized.

int main(){
	float myvec[VECTORSIZE]={1,2,3,4,5,6,7,8};
	float average;

	average=vectoravg(VECTORSIZE ,myvec);//prototype

	cout<<"Average is = "<<average<<endl;
	return 0;
}
float vectoravg(int a , float b[] ){
	float summation=0 ;
	float AVERAGE ;
	int counter;
	for (counter=0 ; counter<a ; counter++){
		summation=summation+b[counter];
	}
	AVERAGE=summation/a;

	return AVERAGE;//return type of the data is mentioned.
}*/
// functions by referencing.addition

#include<iostream>
using namespace std;
float addvectors(float*, float* , int );//prototype

int main(){
	float v1[5]={0,1,2,3,4};

	float v2[5]={5,6.5,7.9,8,9};

	float vsum[5];

	int vectorsize=5;

	float result=0;

	float *pointer1;

	float *pointer2;

	pointer1=&v1[0];//location of first element v1 vector.we can also write it as pointer1=v1... so that v1 is the pointer itself.

	pointer2 =&v2[0];//location of fiorst element of v2 vector.

	result=addvectors(pointer1 , pointer2, vectorsize  );

	for(int i=0; i<5 ; i++){
		cout<<vsum[i]<<endl;
	}

	cout<<result<<endl;

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

/*#include <iostream>
using namespace std;

float multiplyvectors( float*, float*, int);
int main(){


	float q[3]={0.2,0.9,0.11};

	float r[3]={2.2, 23.4 ,98.9};

	float *ptr1;

	ptr1=&q[0];

	float *ptr2;

	ptr2=&r[0];

    float R;

	R= multiplyvectors(ptr1, ptr2 , 3);

	cout<<R;
	return 0;

}
float  multiplyvectors(float *pointer1 ,float *pointer2, int p ){
	float RESULT=0;

	for (int i=0; i<p ; i++){
		RESULT=*pointer1 * *pointer2;
		pointer1++;
		pointer2++;

	}
	return RESULT;
}*/
