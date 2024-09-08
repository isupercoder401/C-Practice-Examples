#include <iostream>
using namespace std;
int main(){
	int a[3][3];
	int b[3][3];
	int i;
	int j;
	int k;
	int R[3][3]={0};
	
	cout<<"Enter the element of 1st matrix "<<endl;
	
	for(i=0 ; i<3 ;i++){
		for(j=0 ; j<3 ; j++){
			
			cout<<"Enter the numbers of the components ["<<i<<"]["<<j<<"]";
			cin>>a[i][j];
		}
		
	}
	cout<<"The First Matrix . . . "<<endl;
	
	for(i=0 ;i<3 ; i++){
		for(j=0 ;j<3 ;j++){
			cout<<a[i][j]<<"	";
		}
		cout<<endl;
	}
	
	
	cout<<"Enter the element of 2nd matrix "<<endl;
	
	for(i=0 ; i<3 ;i++){
		for(j=0 ; j<3 ; j++){
			
			cout<<"Enter the numbers of the components ["<<i<<"]["<<j<<"]";
			cin>>b[i][j];
		}
		
	}
	cout<<"The Second Matrix . . . "<<endl;
	
	for(i=0 ;i<3 ; i++){
		for(j=0 ;j<3 ;j++){
			cout<<a[i][j]<<"	";
		}
		cout<<endl;
	}
	
	
	// the program basically starts from here the upper values are just for input for a string
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				R[i][j]=R[i][j]+a[i][k]*b[k][j];//resultant 
			}
		}
	}
	
	cout<<"Product of 2 matrices is "<<endl;
	
	for(i=0;i<3;i++){
		
	for(j=0;j<3;j++){
		
		cout<<R[i][j]<<"	"<<endl;
	}
	}

	
}
