#include <iostream>
using namespace std;
int main(){
	float pakistan;
	float india;
	float bangladesh;
	for (pakistan=0.1; pakistan<14; pakistan++){
		for (india=0.01; india<9; india++){
			for (bangladesh=0.2; bangladesh<16; bangladesh++){
		     cout<<pakistan+india-bangladesh<"\t";
		     cout<<endl;
			}
			cout<<endl;
		}
		cout<<"    THIS IS THE OUTPUT    "<<"\n";
	}
	cout<<endl;
	
	return 0;
}
