/*#include<iostream>
using namespace std;
#define VSIZE 8 // directive 
float vectoravg(int size , float vector[]);
float vectorsum(int n , float vec);
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
float (vectorsum(int n )); float vec[]){
int counter;
float sum=0;
for(counter=0 ; counter<n ; counter++){
	sum=sum+v[counter];
}
return sum;
}*/

#include <iostream>
using namespace std;

int sum(int, int);//prototype.
int main(){
   int num1, num2 ;
cout<<"Enter the first two integers "<<endl;
cin>>num1>>num2;
//This will call the first function
   cout<<"Result: "<<sum(num1, num2)<< endl;
   return 0;
}
int sum(int a, int b){
   return a+b;
}
//taking the input of an array from a user


/*#include <iostream>
using namespace std;

int main() {
    int numbers[5];

    cout << "Enter 5 numbers: " << endl;

    //  store input from user to array
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }

    cout << "The numbers are: ";

    //  print array elements
    for (int n = 0; n < 5; ++n) {
        cout << numbers[n] << "\t";
    }

    return 0;
}o*/
