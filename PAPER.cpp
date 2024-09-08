#include <iostream>
using namespace std;
  struct studentdata{
char studentname[20];

long long CNIC;
 char department[20];

int overallgrades;

};
int main(){
int n,i;
struct studentdata student;
cout<<"Enter the amount of students you want to insert the information for : : "<<endl;
cin>>n;
for(i=1;i<=n;i++){
cout<<"NOW ENTER THE DATA OF "<<i<<" STUDENT "<<endl;
cout<<"Enter Name of student "<<i<<endl;
cin>>student.studentname;
cout<<"Entered name of the student is : "<<endl;
cout<<endl;

cout<<"Enter the CNIC of the student "<<i<<endl;
cin>>student.CNIC;
cout<<"The entered CNIC of the student is "<<student.CNIC<<endl;
cout<<endl;

cout<<"Enter the department of "<<i<<" student "<<endl;
cin>>student.department;
cout<<"The department of student "<<i<<" is "<<student.department<<endl;
cout<<endl;

cout<<"Enter the overall marks obtained by student "<<i<<endl;
cin>>student.overallgrades;
cout<<"The Overall marks otained by student"<<i<<" are "<<student.overallgrades<<endl;
cout<<endl;


cout<<endl;
}
return 0;
}
