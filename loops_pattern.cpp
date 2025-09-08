#include <iostream>
using namespace std;

int  main(){
	
	int num = 0;

	for(int i=1; i<=5; i++){
		
		for(int j=1; j<=5; j++){
			
			if( j <= 5-i )
				cout<<"   ";
			
			else
				cout<<" * ";
		}
		cout<<endl;
	}
	
	return 0;
}
