#include <iostream>
using namespace std;
int main(){
	cout<<"Q#2b)Write a program that takes input from the user and tell us weather it is a vowel or not ?"<<endl;
	cout<<endl;

int tocheck;//we initiaslised an integeter

char L[100];//We initialised a character and gave it a word limit of 100 words only

cout<<"Enter a sentence to check the number of vowels in it "<<endl;

cin.getline(L , 100);//we wanted to use cin but as the c++ language terminates the sentence written with spaces between them . thus we use cin.getline what it basically does is that it ignores the swpaces and Reads whole the sentence been written.	
	 
/*Now applying the for loop */

for (int q=0;L[q]!='\0';q++){//we initialised another integer , and we wanted it to check the string L we initialised untill the number of inputs become zero . !this mark means not equals to Zero as given ahead
/*'\0' is basically called terminator checker */
/*Now using the if loop*/

    if(L[q]=='a'|| L[q]=='e'|| L[q]=='i'|| L[q]=='o'|| L[q]=='u'){//we used single quote as we used for a character if it was a integer , we would have used the double qoute as usual'and || this sign suggest that or is used. 
    	tocheck=tocheck+1;
	}
}
cout<<"The number of vowels in the above entered sentence are:  "<<tocheck;	 
	return 0;
}

