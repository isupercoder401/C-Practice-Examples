#include <iostream>
using namespace std;
int main(){
   int arr[3][2]={{2,5},{4,0},{9,1}};
   int rindex;
   int cindex;
   cout<<"Date :10/12/2020"<<endl;
   /*Outer loop for counting row
   and 
   inner loop for counting column
   note that first the outer loop runs and then after it inner loop execute and then when it becomes equalt to the condition provided to us so it goes back to the outer loop and vice versa*/
   
   for(rindex=0;rindex<3;rindex++){
   	for(cindex=0;cindex<2;cindex++){
   		
   		cout<<arr[rindex][cindex]<<"\t";

	   }
	  cout<<endl; 
   }
   return 0;
	}
	/*Practice#	
	int array[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	int rowindex;
	int columindex;
	
	for(rowindex=0;rowindex<5;rowindex++){
		for(columindex=0;columindex<5;columindex++){
			
			cout<<array[rowindex][columindex]<<"\t";
		}
		
	cout<<endl;	
	}
	return 0;
	}  */
