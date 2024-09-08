#include<iostream>

#include<fstream>

using namespace std;
int main(){

/*
int main(){
	int num;
	
	FILE *fptr;
	
	fptr=fopen("program.txt","w");//second "w" is argument. 
	
	if(fptr==NULL)
	{
	cout<<"error"<<endl;
	
}
	return 0;
	
} */

ofstream MyFile("Checkingfile.docx");

MyFile<<"I am the one who is chceking how to use files in c++ as Sir Zia didn't taught us well long live Pakistan ........ Please help me ....... Stay away from Pakistan "<<endl;

MyFile.close();

string MyText;

ifstream MyReadFile("Checkingfile.docx");

while (getline (MyReadFile, MyText)){
	
	cout<<MyText<<endl;
}

MyReadFile.close() ;

}
