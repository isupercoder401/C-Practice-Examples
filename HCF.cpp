
#include <iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	
	cout<<"Enter 1st value "<<endl;
	cin>>a;
	cout<<"Enter 2nd value "<<endl;
	cin>>b;
 if ( b > a) {   
        int temp = b;
        b = a;
        a = temp;
    }
		
	int HCF;
   int d;
	for( d=1 ; d<=b ; ++d){
		if(a%d==0 && b%d==0){
			
			HCF=d;	
		}
	
	}
		cout<<"HCF IS =="<<HCF<<endl;
	return 0;
}
