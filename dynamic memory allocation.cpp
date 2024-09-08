#include <iostream>
#include <stdio.h>
#include <cstdio>
 #include <cstdlib>
using namespace std;
int main(){
	
	
	int *pv1;
	int *pv2;
	
	//alocation of memory for 10 integers.//
	pv1=(int*) malloc(10*sizeof(int));
	pv2=(int*) malloc(10*sizeof(int));// the first int is called type casting.
	
	* (pv1+0)=5;
		* (pv1+1)=10;
			* (pv1+2)=70;
				

	
	* (pv2+0)=15;
	* (pv2+1)=30;
	* (pv2+2)=60;
	
	
	free(pv1);// free the memory location from the setup.
	free(pv2);
	
	int v1=5;//just trying print f;
	
	printf("v1=%d\n" , v1);//%d is used for int
	
	int v2=10;
	int v3=15;
	
	printf("v2=%d\t",v2 ,"v3=%d\n" ,v3);//\n next line .
	
	
	
	return 0;
}
