#include <iostream>
using namespace std;

	struct BankAccount{
		char Bankname[90];
		char Type[16];
		char AccountNum[32];
		char Title[64];
	};
	int main(){
	
		struct BankAccount Account1;
		
		cout<<"Enter Bank Name"<<endl;
		cin>>Account1.Bankname;
		cout<<"Bank Name is "<<Account1.Bankname<<endl; 
		cout<<endl;
		
	cout<<"Enter Account type"<<endl;
	cin>>Account1.Type;
	cout<<"The Account type is "<<Account1.Type<<endl;
	cout<<endl;
	
	cout<<"Enter account number "<<endl;
	cin>>Account1.AccountNum;
	cout<<"This is the account number"<<Account1.AccountNum<<endl;
	cout<<endl;
	
	cout<<"Enter the title / Account holder's name"<<endl;
	cin>>Account1.Title;
	cout<<"This is the title of the account"<<Account1.Title<<endl;
	cout<<endl;
	
		return 0;
	}
	
