/*#include <iostream>
using namespace std;
int main(){
 float realnum[6]={2.5 ,3.6 ,9.2 ,10.1 , 1.3 , 2.6};
   float a[6]={1.3 ,2.9 ,-1.1 ,3.6, 5.0, 6.8}; 
   int counter;
float product;

for(counter=0; counter<6; counter++){
	product=product+realnum[counter]*a[counter];
}
  cout<<"Product ="<<product<<endl;
  
  if(product==0){
  	cout<<"Vectors are orthognal"<<endl;
  	
  }
  else ;{
  	cout<<"Vectors are not orthognal"<<endl;
  }
   return 0;
}*/
#include <iostream>

using namespace std;

int main()
{
  int a[2] [2];
  int b[2] [2];
  int c[2] [2];
 
  int i,j;
  int k = 0;

  for( i = 0; i <2; i ++)
  {
    for( j = 0; j<2; j++)
    {
      cout<<"Enter your values"<<endl;
      cin>>a[i][j];
    }
  }

  for( i = 0; i <2; i ++)
  {
    for( j = 0; j<2; j++)
    {
      cout<<a[i][j];
    }
    cout<<endl;
  }

  for( i = 0; i <2; i ++)
  {
    for( j = 0; j<2; j++)
    {
      cout<<"Enter your values"<<endl;
      cin>>b[i][j];
    }
  }

  for( i = 0; i <2; i ++)
  {
    for( j = 0; j<2; j++)
    {
      cout<<b[i][j];
    }
    cout<<endl;
  }

  for(i = 0; i<2; i++)
  {
    for(int k= 0; k<2; k++)
    {
      if(i==0 && k == 0)
      {
        c[0] [0] = a[0] [0] * b[0] [0] + a[0] [1] * b [1][0] ;
      }

      if( i==0 && k==1)
      {
        c[0] [1] = a[0] [0] * b[0] [1] + a[0][1] *b[1] [1] ;
      }

      if(i==1 && k ==0)
      {
        c[1][0] = a[1] [0] * b[0] [0] + a[1] [1] * b[1] [0] ;
      }

      if(i == 1 && k == 1 )
      {
        c[1] [1] = a[1] [0] * b[0] [1]  + a[1] [1] * b[1] [1] ;
      } 
    }
  } 

  for(int i = 0; i <2; i ++)
  {
    for(int j = 0; j<2; j++)
    {
      cout<<c[i][j];
    }
    cout<<endl;
  }
   
  system("pause");
}

