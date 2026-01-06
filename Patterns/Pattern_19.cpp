#include<iostream>
using namespace std;

int main(){
	int space=0;
	int space1=2*(5-1);
	for(int i=0;i<6;i++){
		
		//star
		for(int j=0 ; j<5-i ; j++){
			cout<<"*";
		}
		//space
		
		for(int j=0;j<space;j++){
			cout<<" ";
		}
		
		
		//star
		for(int j=0 ; j<5-i ; j++){
			cout<<"*";
		}
		cout<<endl;
		space+=2;
	}
	
	for (int i = 1; i <= 5; i++) {

        // Left stars
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < space1; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        cout << endl;
        space1 -= 2;
    }

	
	return 0;
}