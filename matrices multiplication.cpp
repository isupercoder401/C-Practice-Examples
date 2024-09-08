#include <iostream>

using namespace std;

int main()
{
  int Firstmatrix[2] [2]={{1,2},{3,4}};
  int Secondmatrix[2] [2]={{5,6},{7,8}};
  int Resultantmatrix[2] [2];
 
  int a1;
 


  
  for(a1 = 0; a1<2; a1++)
  {
    for(int a2= 0; a2<2; a2++)
    {
      if(a1==0 && a2 == 0)
      {
        Resultantmatrix[0] [0] = Firstmatrix[0] [0] * Secondmatrix[0] [0] + Firstmatrix[0] [1] * Secondmatrix [1][0] ;
      } 

      if( a1==0 && a2==1)
      {
        Resultantmatrix[0] [1] = Firstmatrix[0] [0] * Secondmatrix[0] [1] + Firstmatrix[0][1] *Secondmatrix[1] [1] ;
      }

      if(a1==1 && a2==0)
      {
        Resultantmatrix[1][0] =Firstmatrix[1] [0] * Secondmatrix[0] [0] +Firstmatrix[1] [1] *Secondmatrix[1] [0] ;
      }

      if(a1 == 1 &&a2 == 1 )
      {
        Resultantmatrix[1] [1] = Firstmatrix[1] [0] * Secondmatrix[0] [1]  + Firstmatrix[1] [1] * Secondmatrix[1] [1] ;
      } 
    }
  } 
  
  cout<<"So the product of square matices is"<<endl;
  int a3;

  for(int a1 = 0; a1 <2; a1 ++)
  {
    for(int a3 = 0; a3<2; a3++)
    {
      cout<<Resultantmatrix[a1] [a3];
    }
    cout<<endl;
  }
   
  return 0;
}
