/*#include <iostream>

using namespace std;

int Addition(int* , int*);

int main()

{// main program

int x=5;

int y=12;

int *pointer1;

int *pointer2;

int result;

pointer1=&x;

pointer2=&y;

result=Addition( pointer1 , pointer2 );

cout<<result<<endl;

return 0;

}
	 int Addition(int *p1, int *p2)
	 
	 {
	 	
	 	int R;
	 	
	 	R=*p1 + *p2;
	 	
	 	return R;
	 }*/
	 
//this is not a vector addition//
	 #include<iostream>
using namespace std;

/*float addvectors(float*, float* , int );

int main(){
	float v1[5]={0,1,2,3,4};
	
	float v2[5]={5,6.5,7.9,8,9};
	
	int result;
	
	float *pointer1;
	
	float *pointer2;
	
	pointer1=&v1[0];//location of first element v1 vector.we can also write it as pointer1=v1... so that v1 is the pointer itself.
	
	pointer2 =&v2[0];//location of fiorst element of v2 vector.
	
	result=addvectors(pointer1 , pointer2, 5 );// 5 is basically the size of vectors.
	
	cout<<result<<endl;
	
	cout<<"size of v1[0] is "<<sizeof(v1[0])<<endl;
	
	cout<<"size of v1 is "<<sizeof(v1)<<endl;
	
	return 0;
	
}

float addvectors(float*pointer1, float*pointer2 , int z){//z for number of elements to add the number os element in the vector.

float R=0;

int i ;

for (i=0 ; i<z ; i++){
R =R + *pointer1+ *pointer2;
	pointer1++;//pointer1++ would basically add 4 in memoery location or address
	pointer2++;
	
}
return R;
}*/

//now for vector addition if we want toa dd vectors we need to initilise another vecto
float Addvectors(float* , float* , float*, int);

int main(){
		float v1[5]={0,1,2,3,4};
		
			float v2[5]={5,6.5,7.9,8,9};
			
			float vsum[5];
			
			float *pointer1;
	
	float *pointer2;
	
	pointer1=&v1[0];//location of first element v1 vector.we can also write it as pointer1=v1... so that v1 is the pointer itself.
	
	pointer2 =&v2[0];//location of fiorst element of v2 vector.
	
	float result;
	
	result=Addvectors(pointer1 , pointer2,vsum, 5 );// 5 is basically the size of vectors.
	
	cout<<result<<endl;
	
	cout<<"size of v1[0] is "<<sizeof(v1[0])<<endl;
	
	cout<<"size of v1 is "<<sizeof(v1)<<endl;
	
	return 0;
	
}

float Addvectors(float*pointer1, float*pointer2 ,float *sumvec, int z){//z for number of elements to add the number os element in the vector.

float R=0;

int i ;

for (i=0 ; i<z ; i++){
	*sumvec=*pointer1+ *pointer2;


	pointer1++;//pointer1++ would basically add 4 in memoery location or address
	pointer2++;
	sumvec++;
}

}
		


	 
