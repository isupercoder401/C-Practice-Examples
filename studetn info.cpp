#include <iostream>
using namespace std;
    struct studentinfo{
    	char name[15];
    	int roll[20];
    	int age[2];
    	int sub1[3];
    	int sub2[3];
    	int sub3[3];
    
    };
    int main(){
	
 struct studentinfo student1,student2,student3;

cout<<"Enter the name of student 1 "<<endl;
cin>>student1.name;
cout<<"name of student 1 is "<<student1.name<<endl;

cout<<"Enter the rollnumber of student 1 "<<endl;
cin>>student1.roll[0];
cout<<"roll number of student 1 is "<<student1.roll[0]<<endl;

cout<<"Enter the age of student 1 "<<endl;
cin>>student1.age[0];
cout<<"age of student 1 is "<<student1.age[0]<<endl;

cout<<"Enter the marks  of student 1 in subject 1 out of 50 "<<endl;
cin>>student1.sub1[0];
cout<<"The marks of student 1 in subject 1 are "<<student1.sub1[0]<<endl;

cout<<"Enter the marks of student 1 in subject 2 out of 50 "<<endl;
cin>>student1.sub2[0];
cout<<"The marks of student 1 in subject 2 are "<<student1.sub2[0]<<endl;

cout<<"Enter the marks of student 1 in subject 3 out of 50 "<<endl;
cin>>student1.sub3[0];
cout<<"The marks of student 1 in subject 3 are "<<student1.sub3[0]<<endl;

cout<<"Enter the name of student 2 "<<endl;
cin>>student2.name;
cout<<"The name of student 2 is "<<student2.name<<endl;

cout<<"Enter the rollnumber of student 2 "<<endl;
cin>>student2.roll[0];
cout<<"The roll number of student 2 is "<<student2.roll[0]<<endl;

cout<<"Enter the age of student 2 "<<endl;
cin>>student2.age[0];
cout<<"The age of student 2 is "<<student2.age[0]<<endl;

cout<<"Enter the marks of student 2 in subject 1 out of 50 "<<endl;
cin>>student2.sub1[0];
cout<<"The marks of student 2 in subject 1 are "<<student2.sub1[0]<<endl;

cout<<"Enter the marks of student 2 in subject 2 out of 50  "<<endl;
cin>>student2.sub2[0];
cout<<"The marks of student 2 in subject 2 are "<<student2.sub2[0]<<endl;

cout<<"Enter the marks of student 2 in subject 3 out of 50 "<<endl;
cin>>student2.sub3[0];
cout<<"The marks of student 2 in subject 3 are "<<student2.sub3[0]<<endl;

cout<<"Enter the name of student 3 "<<endl;
cin>>student3.name;
cout<<"The name of student 3 is "<<student3.name<<endl;

cout<<"Enter the rollnumber of student 3 "<<endl;
cin>>student3.roll[0];
cout<<"The roll number of student 3 is "<<student3.roll[0]<<endl;

cout<<"Enter the age of student 3 "<<endl;
cin>>student3.age[0];
cout<<"The age of student 3 is "<<student3.age[0]<<endl;

cout<<"Enter the marks of student 3 in subject 1 out of 50 "<<endl;
cin>>student3.sub1[0];
cout<<"The marks of student 3 in subject 1 are "<<student3.sub1[0]<<endl;

cout<<"Enter the marks of student 3 in subject 2 out of 50  "<<endl;
cin>>student3.sub2[0];
cout<<"The marks of student 3 in subject 2 are "<<student3.sub2[0]<<endl;

cout<<"Enter the marks of student 3 in subject 3 out of 50  "<<endl;
cin>>student3.sub3[0];
cout<<"The marks of student 3 in subject 3 are "<<student3.sub3[0]<<endl;

int a=student1.sub1[0]+student1.sub2[0]+student1.sub3[0];
int b=student2.sub1[0]+student2.sub2[0]+student2.sub3[0];
int c=student3.sub1[0]+student3.sub2[0]+student3.sub3[0];


cout<<endl;
cout<<" As the total marks are 50 so 20 marks are passing of every subject "<<endl;
cout<<endl;

if(student1.sub1[0]<20){
	cout<<student1.name<<"has been failed in subject 1"<<endl;
}
if(student1.sub2[0]<20){
	cout<<student1.name<<"has been failed in subject 2"<<endl;
}
if(student1.sub3[0]<20){
	cout<<student1.name<<"Has been failed in subject 3"<<endl;
}
if(student2.sub1[0]<20){
		cout<<student2.name<<"has been failed in subject 1"<<endl;
}
if(student2.sub2[0]<20){
			cout<<student2.name<<"has been failed in subject 2"<<endl;
}
if(student2.sub3[0]<20){
		cout<<student2.name<<"has been failed in subject 3"<<endl;	
}
if(student3.sub1[0]<20){
			cout<<student3.name<<"has been failed in subject 1"<<endl;
}
if(student3.sub2[0]<20){
	cout<<student3.name<<"has been failed in subject 2"<<endl;
}
if(student3.sub3[0]<20){
	cout<<student3.name<<"has been failed in subject 3"<<endl;
}



cout<<endl;
cout<<"Thanks"<<endl;
 return 0;
}
