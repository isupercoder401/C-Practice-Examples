#include<iostream>
using namespace std;

float addtwo(float * , float *);//pointer to float not the value but the address of the data where it is stored.
int main(){

float x=5;

float y=6;
 
float * pointertoint=0;//steric is used to get information about the location

float * pointer;

pointer = &y;

cout<<"The memory location of "<<y<<" is "<<pointer<<endl;

cout<<endl;

pointertoint=&x;

cout<<"The location of x in memory is "<<endl;

cout<<pointertoint<<endl;// only location of x would be the output of this program

cout<<" the mameory location of "<<x<<" is :"<<pointertoint<<endl;

float sum;

sum = addtwo( &x , &y );

return 0;

}//now the definatio of this function.

float addtwo( float*var1, float*var2){//this type is float to mpercent.

float sum;

sum=*var1 + *var2 ;//we are accesing the values present in the location.

cout<<sum<<endl;

return sum;
	
}

/*#include<iostream>
using namespace std;
float addtwo(float , float  );

int main(){
	float x=2.4,y=3.6;
	float sum;
	sum=addtwo(x,y);
	cout<<sum<<endl;
	return 0;
}
float addtwo(float num1 , float num2){
float result;
result = num1 + num2;
cout<<result;
return result ;
}*/

