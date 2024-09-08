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

#include<iostream>
using namespace std;
int main(){
/*
int x=5;

int y=6;

int *pointerofy=0;

pointerofy=&y;

cout<<pointerofy<<endl;

cout<<*pointerofy<<" is the value we need "<<endl;

cout<<sizeof(*pointerofy)<<endl;//adress of microprocessor kitne bits ka ha 
 
int * pointertoint=0;// * is dereferancing operator.

pointertoint=&x;

cout<<sizeof(pointertoint)<<" bytes =64 bits processsor "<<endl;//just to check.

cout<<" The location of x in memory is "<<endl;

cout<<pointertoint<<endl;// only location of x would be the output of this program

cout<<" the mamory location of "<<x<<" in memory is :"<<pointertoint<<endl;

cout<<*pointertoint<<endl;//the stored value is copied here.

return 0;
*/int variable1;

int variable2;

int *ptr1;//pointer always contain a valid address.

int*ptr2;//note that pointer iss just used for momory location , it is not used to point on the variable  

variable1=5;

ptr1= &variable1;

ptr2= &variable2;

variable2= *ptr1;//would copy the value present in the pointer 

cout<<*ptr1<<endl;//we copy variable 1 to variable 2 by using ptr1 and ptr2  , we are copying the value by using pointers.

return 0;

/* *ptr=5 ; copy value 5 to a memory location printed by pointer.*/
}
